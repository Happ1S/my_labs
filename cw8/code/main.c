#include "list.h"
#include "iterator.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

#define NUM_OPTIONS 5

  void display_options(int selected) {
      clear();  // Clear the screen
      if (selected == 0) {
          attron(COLOR_PAIR(1));
          printw("> Add node\n");
          attroff(COLOR_PAIR(1));
          printw("  Delete node\n");
          printw("  Print list\n");
          printw("  Do function\n");
          printw("  Exit\n");
      } else if (selected == 1) {
          printw("  Add node\n");
          attron(COLOR_PAIR(1));
          printw("> Delete node\n");
          attroff(COLOR_PAIR(1));
          printw("  Print list\n");
          printw("  Do function\n");
          printw("  Exit\n");
      } else if (selected == 2) {
          printw("  Add node\n");
          printw("  Delete node\n");
          attron(COLOR_PAIR(1));
          printw("> Print list\n");
          attroff(COLOR_PAIR(1));
          printw("  Do function\n");
          printw("  Exit\n");
      } else if (selected == 3) {
          printw("  Add node\n");
          printw("  Delete node\n");
          printw("  Print list\n");
          attron(COLOR_PAIR(1));
          printw("  Do function\n");
          attroff(COLOR_PAIR(1));
          printw("  Exit\n");
      } else {
          printw("  Add node\n");
          printw("  Delete node\n");
          printw("  Print list\n");
          printw("  Do function\n");
          attron(COLOR_PAIR(1));
          printw("> Exit\n");
          attroff(COLOR_PAIR(1));
      }
      refresh();
  }

int main()
{
    List *list = list_create();
    initscr();	
    start_color();
    init_pair(1, COLOR_RED, COLOR_BLACK);
    keypad(stdscr, TRUE);
    cbreak();
    noecho();
    int key;
    refresh();
    int selected = 0;
    Iterator *it;
    display_options(selected);
    while ((key = getch()) != 'q') {
        if (key == KEY_UP) {
            selected = (selected > 0) ? selected - 1 : 0;
        } else if (key == KEY_DOWN) {
            selected = (selected < NUM_OPTIONS - 1) ? selected + 1 : NUM_OPTIONS - 1;
        }
        display_options(selected);

        if (key == '\n') {
            if (selected == 0) {
                clear();
                echo();
                attron(COLOR_PAIR(1));
                printw("Node to insert > ");
                attroff(COLOR_PAIR(1));
                long value;
                scanw("%ld", &value);
                list_insert(list->head, value);
                noecho();
                refresh();
                display_options(selected);
            } else if (selected == 1) {
                list_delete(list->head);
            } else if (selected == 2) {
                clear();
                it = iter_create(list);
                print_list(it);
                printw("\n");
                free(it);
                attron(COLOR_PAIR(1));
                printw("press any key to continue\n");
                attroff(COLOR_PAIR(1));
                getch();
                display_options(selected);

            } else if (selected == 3) {
                clear();
                echo();
                attron(COLOR_PAIR(1));
                printw("value for function > ");
                attroff(COLOR_PAIR(1));
                long value;
                scanw("%ld", &value);
                list = not_standart_function(list, value);
                noecho();
                refresh();
                display_options(selected);
            } else {
                endwin();
                exit(EXIT_SUCCESS);
            }
        }
    }
    
    endwin();
    return 0;
}
