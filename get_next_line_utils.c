#include "get_next_line.h"

int getLen(int  fd)
{
    char    c;
    int     i;

    i = 0;
    while (c != '\n')
    {
        read(fd, &c, 1);
        i++;
    }
    return (i);
}