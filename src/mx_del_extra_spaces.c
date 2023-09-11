#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
    if (!str) {
        return NULL;
    }
    char *dup = mx_strdup(str);
    int len = mx_strlen(dup);
    int i = 0;
    int j = 0;
    while (dup[i] != '\0') {
        if (mx_isspace(dup[i])) {
            while (mx_isspace(dup[i])) {
                i++;
            }
            dup[j] = ' ';
            j++;
        }
        dup[j] = dup[i];
        i++;
        j++;
    }
    dup[j] = '\0';
    if (dup[j - 1] == ' ') {
        dup[j - 1] = '\0';
    }
    return mx_strncpy(mx_strnew(mx_strlen(dup)), dup, len);
}

