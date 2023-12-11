#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char word[100];
    int count;
    char result[100];
    int resultIndex = 0, flag = 0;
    scanf("%s", word);
    for (int i = 0; i < strlen(word); ++i) {
        if (word[i] == '0' && flag == 0) {
            count++;
        }
        else {
            result[resultIndex++] = word[i];
            flag = 1;
        }
    }
    char zeros[count];
    for (int i = 0; i < count; ++i) {
        zeros[i] = '0';
    }

    printf("%s%s\n", result, zeros);
    return 0;
}
