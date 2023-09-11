#include "../inc/libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    if (!big || !little || big_len < little_len) {
        return NULL;
    }

    const unsigned char *big_str = big;
    const unsigned char *little_str = little;

    for (size_t i = 0; i < big_len - little_len + 1; i++) {
        if (mx_memcmp(big_str + i, little_str, little_len) == 0) {
            return (void *)(big_str + i);
        }
    }

    return NULL;
}

