#include "list.h"
#include <stdlib.h>
#include <ncurses.h>
#include <stdio.h>

List *list_create()
{
    List *list = (List*) malloc(sizeof(List));
    
    list->head = (ListNode*) malloc(sizeof(ListNode));
    list->head->next = NULL;

    return list;
}

void list_insert(ListNode *after_node, Item value)
{
    ListNode *inserted = (ListNode*) malloc(sizeof(ListNode));
    inserted->data = value;
    inserted->next = after_node->next;
    after_node->next = inserted;
}

void list_delete(ListNode *after_node) {
    // Check if after_node and after_node->next are not null
    if (after_node != NULL && after_node->next != NULL) {
        // Node to be deleted
        ListNode *node_to_delete = after_node->next;
        
        // Update the pointers to bypass the node to be deleted
        after_node->next = node_to_delete->next;
        
        // Free the memory of the node to be deleted
        free(node_to_delete);
        
        // Refresh the screen to display the print statement
        refresh();
    } else {
        // Print an error message if after_node or after_node->next is null
        printw("Error: Unable to delete node. Invalid after_node or after_node->next.\n");
        refresh();
    }
}

bool list_is_empty(List *list)
{
    return (list->head->next == NULL);
}

void list_destroy(List *list)
{
    ListNode *n = list->head->next;
    while (list->head != NULL)
    {
        n = list->head->next;
        free(list->head);
        list->head = n;
    }
    list->head = NULL;
}

void list_print(List *list) {
    if (list != NULL && list->head != NULL) {
        ListNode *current = list->head->next;  // Начинаем с первого узла (после head)
    while (current != NULL) {
        printw("%d ", current->data);  // Выводим данные текущего узла
        current = current->next;  // Переходим к следующему узлу
    }
    printw  ("\n");  // Конец списка
    refresh();
    }
}

void bubble_sort(List *list) {
    if (list_is_empty(list)) {
        return;
    }

    bool swapped;
    ListNode *current;
    ListNode *end = NULL;

    do {
        swapped = false;
        current = list->head;

        while (current->next != end) {
            if (current->data > current->next->data) {
                Item temp = current->data;
                current->data = current->next->data;
                current->next->data = temp;
                swapped = true;
            }
            current = current->next;
        }
        end = current;
    } while (swapped);
}
