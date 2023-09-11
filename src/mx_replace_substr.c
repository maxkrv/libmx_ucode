#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
    if (!str || !sub || !replace) {
        return NULL;
    }
    int len = mx_strlen(str) - mx_strlen(sub) + mx_strlen(replace);
    char *result = mx_strnew(len);
    int i = 0;
    int j = 0;
    int k = 0;

    while (str[i]) {
        if (str[i] == sub[j]) {
            while (str[i] == sub[j]) {
                i++;
                j++;
            }
            if (j == mx_strlen(sub)) {
                for (int l = 0; l < mx_strlen(replace); l++) {
                    result[k] = replace[l];
                    k++;
                }
                j = 0;
            }
        }
        result[k] = str[i];
        k++;
        i++;
    }

    return result;
}

