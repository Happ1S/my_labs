# Отчет по лабораторной работе № 10
## по курсу "Фундаментальная информатика"

Студент группы M8О-108Б-23 Гаврилов Никита Валерьевич

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Издательская система LaTeX
2. **Цель работы**: Верстка страницы учебника по мат. анализу
3. **Задание**: Сверстать 39 страницу учебника по мат. анализу
4. **Задачи**:
  3.1. установить LATEX
  3.2. разбить страницу на фрагменты
  3.3. Изучить библиотеки для графики
  3.4  Верска страницы

6. **Сценарий выполнения работы**:

### PDF
![Image alt](https://github.com/Happ1S/my_labs/blob/main/lab10/latex_page-0001.jpg)
```
happis@happis-Vivobook:~/Рабочий стол/main_branch/MAI/labs$ cat hello.c
#include <stdio.h>

int main (void)
{
  puts ("Hello, World!");
  return 0;
}happis@happis-Vivobook:~/Рабочий стол/main_branch/MAI/labs$ gcc --std=c99 --pendantic -o main hello.c
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
