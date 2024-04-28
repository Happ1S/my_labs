#include "list.h"
#include "iterator.h"
#include <ncurses.h>

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


List *not_standart_function(list, value) {
    size_t count = list_count(list, value);
    List *newlist = list_create();
    for (size_t i = 0; i < count; i++) {
        list_insert(newlist->head, value);
    }
    list_destroy(list);
    return newlist;
}



size_t list_count(List *list, Item value) {
    size_t count = 0;
    ListNode *current_node = list->head;

    // Traverse through the list
    while (current_node != NULL) {
        // Compare the current node's data with the specified value
        if (current_node->data == value) {
            count++; // Increment count if values match
        }
        // Move to the next node
        current_node = current_node->next;
    }

    // Return the total count of occurrences
    return count;
}

