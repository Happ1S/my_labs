# Отчет по лабораторной работе № 8
## по курсу "Фундаментальная информатика"

Студент группы M8О-108Б-23 Гаврилов Никита Валерьевич

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Системы программирования на языке Си
2. **Цель работы**: изучение конкретной системы программирования на Си и получение навыков подготовки текстов и отладки программ
3. **Задачи**:
  3.1. Изучить и освоить основные этапы процесса компиляции и подготовки программ к выполнению
  3.2. Составить и отладить простейшую программу на Си
  3.3. Изучить различные системы программирования на Си на других платформахя: GNU, VS Code

4. **Сценарий выполнения работы**:

### Emacs + Terminal
![Image alt](https://github.com/Happ1S/my_labs/blob/main/lab8/screen1_lab8.png)
### Nano
![Image alt](https://github.com/Happ1S/my_labs/blob/main/lab8/screen2_lab8.png.png)
### VS Code
![Image alt](https://github.com/Happ1S/my_labs/blob/main/lab8/screen3_lab8.png.png)
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

5. **Выводы**:
  В результате работы я научился компилировать и отлаживать простейшие программы на Си, а также работать в редакторе emacs, nano и VS Code. Каждый редактор кода оказался по своему хорош. в Vs Code удобнее работать, за счет интуитивного интерфейса, в нано можно быстро редактировать файлы с минимальным интерфейсом, а в emacs удобно редактировать именно Си и С++.
