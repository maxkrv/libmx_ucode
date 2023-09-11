#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    if (!ptr) {
        return malloc(size);
    }

    if (size == 0) {
        free(ptr);
        return NULL;
    }

    void *new_ptr = malloc(size);

    if (!new_ptr) {
        return NULL;
    }

    mx_memmove(new_ptr, ptr, size);
    free(ptr);

    return new_ptr;
}

