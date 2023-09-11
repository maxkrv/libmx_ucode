#include "../inc/libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *s_ = (unsigned char *)s;

    for (size_t i = n; i > 0; i--) {
        if (s_[i] == (unsigned char)c) {
            return &s_[i];
        }
    }

    return NULL;
}

