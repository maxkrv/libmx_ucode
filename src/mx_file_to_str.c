#include "../inc/libmx.h"

char *mx_file_to_str(const char *file) {
    int fd = open(file, O_RDONLY);
    int len = 0;
    char buf;
    char *str = NULL;

    if (fd < 0)
        return NULL;
    while (read(fd, &buf, 1))
        len++;
    close(fd);
    fd = open(file, O_RDONLY);
    str = mx_strnew(len);
    read(fd, str, len);
    close(fd);
    return str;
}

