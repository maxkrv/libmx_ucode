#include "../inc/libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    if (!s1 && !s2) {
        return NULL;
    }
    if (!s1) {
        return mx_strdup(s2);
    }
    if (!s2) {
        return mx_strdup(s1);
    }
    char *str = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
    if (!str) {
        return NULL;
    }
    mx_strcpy(str, s1);
    mx_strcpy(str + mx_strlen(s1), s2);
    
    return str;
}

