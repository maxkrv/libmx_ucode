#include "../inc/libmx.h"

int mx_get_char_index(const char *str, char c) {
    if (!str) {
        return -2;
    }
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}

