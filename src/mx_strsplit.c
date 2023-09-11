#include "../inc/libmx.h"

char **mx_strsplit(const char *s, char c) {
    if (!s) {
        return NULL;
    }
    int words = mx_count_words(s, c);
    char **arr = (char **)malloc(sizeof(char *) * (words + 1));
    int i = 0;
    int j = 0;
    int len = 0;
    while (s[i]) {
        if (s[i] != c) {
            len++;
        }
        if (s[i] == c && len > 0) {
            arr[j] = mx_strnew(len);
            mx_strncpy(arr[j], &s[i - len], len);
            j++;
            len = 0;
        }
        i++;
    }
    if (len > 0) {
        arr[j] = mx_strnew(len);
        mx_strncpy(arr[j], &s[i - len], len);
    }
    arr[words] = NULL;
    return arr;
}

