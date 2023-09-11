#include "../inc/libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int len = mx_strlen(sub);
    int i = 0;

    if (!str || !sub) {
        return -1;
    }
    while (str[i]) {
        if (mx_strncmp(&str[i], sub, len) == 0) {
            count++;
        }
        i++;
    }
    return count;
}

