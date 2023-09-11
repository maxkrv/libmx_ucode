#include "../inc/libmx.h"

int mx_strlen(const char *s) {
    if (!s) {
        return 0;
    }
    int lenght = 0;
    while (*s != '\0') {
        lenght++;
        s++;
    }
    return lenght;
}

