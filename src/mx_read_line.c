#include "../inc/libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    static char *str = NULL;
    char *buf = mx_strnew(buf_size);
    int bytes = 0;
    int i = 0;

    if (fd < 0 || buf_size < 1 || !lineptr || read(fd, buf, 0) < 0)
        return -2;
    if (!str)
        str = mx_strnew(buf_size);
        
    while ((bytes = read(fd, buf, buf_size)) > 0) {
        for (int j = 0; j < bytes; j++) {
            if (buf[j] == delim) {
                *lineptr = mx_strndup(buf, j);
                mx_strcpy(str, buf + j + 1);
                mx_strdel(&buf);
                return i + j;
            }
        }
        str = mx_strjoin(str, buf);
        i += bytes;
    }

    if (bytes == 0 && str[0] != '\0') {
        *lineptr = mx_strdup(str);
        mx_strdel(&str);
        return i;
    }

    mx_strdel(&str);
    mx_strdel(&buf);

    return -1;
}

