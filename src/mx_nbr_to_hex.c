#include "../inc/libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *hex = NULL;
    int len = 0;
    unsigned long nbr_copy = nbr;

    if (nbr == 0) {
        return mx_strdup("0");
    }

    while (nbr_copy != 0) {
        nbr_copy /= 16;
        len++;
    }

    hex = mx_strnew(len);

    for (int i = len - 1; i >= 0; i--) {
        int temp = nbr % 16;

        if (temp < 10) {
            hex[i] = temp + 48;
        }
        else {
            hex[i] = temp + 87;
        }

        nbr /= 16;
    }

    return hex;
}

