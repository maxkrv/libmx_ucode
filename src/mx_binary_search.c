#include "../inc/libmx.h"

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int left = 0;
    int right = size - 1;
    int middle = 0;
    int result = 0;
    
    while (left <= right) {
        middle = (left + right) / 2;
        result = mx_strcmp(arr[middle], s);
        (*count)++;
        
        if (result == 0) {
            return middle;
        }
        else if (result < 0) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }
    
    *count = 0;

    return -1;
}

