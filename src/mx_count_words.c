#include "../inc/libmx.h"

int mx_count_words(const char *str, char c) {
    int count = 0;
    int i = 0;
    int len = 0;

    if (!str) {
        return -1;
    }
    while (str[i]) {
        if (str[i] != c) {
            len++;
        }
        if (str[i] == c && len > 0) {
            count++;
            len = 0;
        }
        i++;
    }
    if (len > 0) {
        count++;
    }
    
    return count;
}

