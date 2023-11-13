![Image alt](https://github.com/Happ1S/my_labs/blob/main/lab8/screen1_lab8.png)
```
happis@happis-Vivobook:~/Рабочий стол/main_branch/MAI/labs$ cat hello.c
#include <stdio.h>

int main (void)
{
  puts ("Hello, World!");
  return 0;
}happis@happis-Vivobook:~/Рабочий стол/main_branch/MAI/labs$ cc hello.c
happis@happis-Vivobook:~/Рабочий стол/main_branch/MAI/labs$ ./a.out
Hello, World!
happis@happis-Vivobook:~/Рабочий стол/main_branch/MAI/labs$ cc hello.c
hello.c: In function ‘main’:
hello.c:5:25: error: expected ‘;’ before ‘return’
    5 |   puts ("Hello, World!")
      |                         ^
      |                         ;
    6 |   return 0;
      |   ~~~~~~                 
happis@happis-Vivobook:~/Рабочий стол/main_branch/MAI/labs$ cc hello.c
hello.c: In function ‘main’:
hello.c:6:3: error: expected declaration or statement at end of input
    6 |   return 0;
      |   ^~~~~~
happis@happis-Vivobook:~/Рабочий стол/main_branch/MAI/labs$ cc hello.c
hello.c: In function ‘main’:
hello.c:6:3: error: expected declaration or statement at end of input
    6 |   return 0;
      |   ^~~~~~
```
