#include "get_next_line.h"
char    *get_next_line(int fd)
{
    char *str;
    static size_t i;
    int  len;

    len = getLen(fd);
    str = malloc(sizeof(char) * (len + 1));
    while (str[i] != '\n')
    {
        i =  read(fd, &str[i], 1);
        if (str[i] = '\n')
            str[i + 1] = '\0';
        i++;
    }
    return (str);
}

int main()
{
    FILE *fd = fopen("penis.txt", "r" );
    char *str = get_next_line(fd);
    printf("%s", str);
    fclose(str);
    return (1);

}
