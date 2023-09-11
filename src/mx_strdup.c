#include "../inc/libmx.h"

char *mx_strdup(const char *str) {
    if (!str) {
        return NULL;
    }
    char *dup = mx_strnew(mx_strlen(str));
    mx_strcpy(dup, str);
    return dup;
}

