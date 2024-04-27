#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "list.h"

#define NUM_OPTIONS 5

void display_options(int selected) {
    clear();  // Clear the screen
    if (selected == 0) {
        attron(COLOR_PAIR(1));
        printw("> Add node\n");
        attroff(COLOR_PAIR(1));
        printw("  Delete node\n");
        printw("  Print list\n");
        printw("  Sort list\n");
        printw("  Exit\n");
    } else if (selected == 1) {
        printw("  Add node\n");
        attron(COLOR_PAIR(1));
        printw("> Delete node\n");
        attroff(COLOR_PAIR(1));
        printw("  Print list\n");
        printw("  Sort list\n");
        printw("  Exit\n");
    } else if (selected == 2) {
        printw("  Add node\n");
        printw("  Delete node\n");
        attron(COLOR_PAIR(1));
        printw("> Print list\n");
        attroff(COLOR_PAIR(1));
        printw("  Sort list\n");
        printw("  Exit\n");
    } else if (selected == 3) {
        printw("  Add node\n");
        printw("  Delete node\n");
        printw("  Print list\n");
        attron(COLOR_PAIR(1));
        printw("> Sort list\n");
        attroff(COLOR_PAIR(1));
        printw("  Exit\n");
    } else {
        printw("  Add node\n");
        printw("  Delete node\n");
        printw("  Print list\n");
        printw("  Sort list\n");
        attron(COLOR_PAIR(1));
        printw("> Exit\n");
        attroff(COLOR_PAIR(1));
    }
    refresh();  // Refresh the screen
}

void list_read_from_file(const char *filename, List *list) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Ошибка открытия файла");
        return;
    }

    Item value;
    while (fscanf(file, "%d", &value) != EOF) {
        list_insert(list->head, value);
    }

    fclose(file);
}

int main(int argc, char *argv[])
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

    // Display the options based on the current selection
        display_options(selected);

     while ((key = getch()) != 'q') {  // Press 'q' to quit
        if (key == KEY_UP) {
            selected = (selected > 0) ? selected - 1 : 0;  // Move up
        } else if (key == KEY_DOWN) {
            selected = (selected < NUM_OPTIONS - 1) ? selected + 1 : NUM_OPTIONS - 1;  // Move down
        }

        // Display the options based on the current selection
        display_options(selected);

        // Perform actions based on the selected option and user input (e.g., Enter key)
        if (key == '\n') {  // Enter key
            if (selected == 0) {
                clear();
                echo();
                attron(COLOR_PAIR(1));
                printw("Node to insert > ");
                attroff(COLOR_PAIR(1));
                int value;
                scanw("%d", &value);
                list_insert(list->head, value);
                noecho();
                refresh();
                display_options(selected);
            } else if (selected == 1) {
                list_delete(list->head);

            } else if (selected == 2) {
                clear();
                list_print(list);
                attron(COLOR_PAIR(1));
                printw("press any key to continue\n");
                attroff(COLOR_PAIR(1));
                getch();
                display_options(selected);

            } else if (selected == 3) {
                bubble_sort(list);
            } else {
                endwin();
                exit(EXIT_SUCCESS);
            }
        }
    }
    
    endwin();
    return 0;
}
