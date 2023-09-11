#include "../inc/libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list *node = mx_create_node(data);
    t_list *last = *list;

    if (!node) {
        return;
    }
    if (!*list) {
        *list = node;
        return;
    }
    
    while (last->next) {
        last = last->next;
    }

    last->next = node;
}

