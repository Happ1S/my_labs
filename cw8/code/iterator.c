#include "iterator.h"
#include "stdio.h"
#include <ncurses.h>

Iterator *iter_create(List *list) {
    Iterator *iter = (Iterator *) malloc(sizeof(Iterator));
    iter->node = list->head;
    return iter;
}

ListNode *iter_next(Iterator *iter) {
    iter->node = iter->node->next;
    return iter->node;
}

bool iter_has_next(Iterator *iter) {
    return iter->node->next != NULL;
}

void iter_set(Iterator *iter, Item value) {
    iter->node->data = value;
}

ListNode *iter_get_next_node(Iterator *iter) {
    return iter->node->next;
}

Item iter_get(Iterator *iter) {
    return iter->node->data;
}

void iter_delete(Iterator *iter) {
    ListNode *tmp = iter->node->next;
    free(iter->node->next);
    iter->node->next = tmp->next;
}

void print_list(Iterator *iter) {
    printf("HEAD ");
    while (iter_next(iter) != NULL) {
        printw("%ld ", iter_get(iter));
    }
}


int list_length(Iterator *iter) {
    int length = 0;
    while (iter_next(iter) != NULL) {
        length++;
    }
    return length;
}


bool check_sort(Iterator *iter) {
    iter_next(iter);
    Item prev = iter_get(iter);
    while (iter_next(iter) != NULL) {
        Item now = iter_get(iter);
        if (prev < now) {
            return false;
        }
        prev = now;
    }
    return true;
}