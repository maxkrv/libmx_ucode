#include "../inc/libmx.h"

int mx_get_substr_index(const char *str, const char *sub) {
    if (!str || !sub) {
        return -2;
    }
    int i = 0;
    int j = 0;
    int index = 0;
    while (str[i] != '\0') {
        if (str[i] == sub[j]) {
            index = i;
            while (str[i] == sub[j]) {
                i++;
                j++;
                if (sub[j] == '\0') {
                    return index;
                }
            }
            j = 0;
        }
        i++;
    }

    return -1;
}

