#include <stdio.h>
#include <string.h>

short int check(char a)
{
    if ((a == 'a')||(a == 'e')||(a == 'i')||(a == 'o')||(a == 'u')||(a == 'A')||(a == 'E')||(a == 'I')||(a == 'O')||(a == 'U'))
        return 2;
    if ((a == ' ')||(a == '\n')||(a == '\t'))
        return 0;
    else
        return 1;
}

int main()
{
    int k = 0;
    int ans = 0;
    char c;
    scanf("%c", &c);
    if (c == '\0')
    {
        printf("-");
        return 0;
    }
    while (c != 10)
    {
        if (check(c) == 1)
            k++;
        if (check(c) == 0)
        {
            if (k == 0)
                ans++;
            k = 0;
        }
        scanf("%c", &c);
    }
    if (k == 0)
        ans++;
    if (ans > 0)
        printf("Yep\n");
    else
        printf("Nope\n");
    return 0;
}