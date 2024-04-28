#include "list.h"
#include <stdlib.h>
#include <ncurses.h>
#include <stdio.h>

List *list_create() {
    // Allocate memory for the List structure
    List *list = (List *)malloc(sizeof(List));
    if (list == NULL) {
        perror("Error: Could not allocate memory for List");
        return NULL;
    }

    // Allocate memory for the head node
    list->head = (ListNode *)malloc(sizeof(ListNode));
    if (list->head == NULL) {
        perror("Error: Could not allocate memory for ListNode");
        free(list); // Free the allocated list before returning
        return NULL;
    }

    // Initialize the head node
    list->head->next = NULL;
    list->head->data = 0; // Explicitly initialize the data field of the head node, if applicable
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
    if (after_node != NULL && after_node->next != NULL) {
        ListNode *node_to_delete = after_node->next;
        after_node->next = node_to_delete->next;
        free(node_to_delete);
        refresh();
    } else {
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
    ListNode *current = list->head;
    ListNode *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    free(list);
}


void list_print(List *list) {
    if (list != NULL && list->head != NULL) {
        ListNode *current = list->head->next;  
    while (current != NULL) {
        printw("%d ", current->data);  
        current = current->next; 
    }
    printw  ("\n");
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
