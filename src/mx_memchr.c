#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    unsigned char *s_ = (unsigned char *)s;

    for (size_t i = 0; i < n; i++) {
        if (s_[i] == (unsigned char)c) {
            return &s_[i];
        }
    }

    return NULL;
}

