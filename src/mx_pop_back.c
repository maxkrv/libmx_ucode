#include "../inc/libmx.h"

void mx_pop_back(t_list **head) {
    if (!head || !*head) {
        return;
    }
    
    t_list *temp = *head;
    t_list *prev = NULL;

    while (temp->next) {
        prev = temp;
        temp = temp->next;
    }

    free(temp);
    if (prev) {
        prev->next = NULL;
    }
    else {
        *head = NULL;
    }
}

