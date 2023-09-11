#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *dst_str = dst;
    const unsigned char *src_str = src;

    if (dst_str < src_str) {
        for (size_t i = 0; i < len; i++) {
            dst_str[i] = src_str[i];
        }
    }
    else {
        for (size_t i = len; i > 0; i--) {
            dst_str[i - 1] = src_str[i - 1];
        }
    }

    return dst;
}

