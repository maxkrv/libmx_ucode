#include "../inc/libmx.h"

void mx_del_strarr(char ***arr) {
    if (!arr || !*arr) {
        return;
    }
    char **temp = *arr;
    for (int i = 0; temp[i]; i++) {
        mx_strdel(&temp[i]);
    }
    free(*arr);
    *arr = NULL;
}

