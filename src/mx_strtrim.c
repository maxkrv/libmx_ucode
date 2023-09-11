#include "../inc/libmx.h"

char *mx_strtrim(const char *str) {
    if (!str) {
        return NULL;
    }
    int len = mx_strlen(str);
    int start = 0;
    int end = len - 1;
    while (mx_isspace(str[start])) {
        start++;
    }
    while (mx_isspace(str[end])) {
        end--;
    }
    if (end < start) {
        return mx_strnew(0);
    }
    char *res = mx_strnew(end - start + 1);
    if (!res) {
        return NULL;
    }
    for (int i = start; i <= end; i++) {
        res[i - start] = str[i];
    }
    return res;
}

