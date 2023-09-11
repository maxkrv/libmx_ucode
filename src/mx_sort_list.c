#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    if (!lst) {
        return NULL;
    }

    int size = mx_list_size(lst);
    t_list *temp = lst;
    void *data = NULL;

    for (int i = 0; i < size; i++) {
        temp = lst;
        for (int j = 0; j < size - 1; j++) {
            if (cmp(temp->data, temp->next->data)) {
                data = temp->data;
                temp->data = temp->next->data;
                temp->next->data = data;
            }
            temp = temp->next;
        }
    }

    return lst;
}

