#include "get_next_line.h"

size_t newline(char *str)
{   
    while (*str)
    {
        if (*str == '\n')
        {
            return(1);
        }
        str++;
    }
    return (0);
}

char    *ft_read(int fd)
{
    char    *buff;
    char    *line;
    int     nb;
    
    buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    line = 0;
    if (buff == NULL)
        return (0);
    while (1)
    {
        nb = read(fd, buff, BUFFER_SIZE);
        if (nb == 0)
        {
            free(buff);
            return (line);
        }
        if (nb == -1)
        {
            free(buff);
            return (0);
        }
        buff[nb] = 0;
        printf("%d %s\n", nb, buff);
        line = ft_strjoin(line, buff);
        if (newline(buff) == 1)
        {
            free(buff);
            return(line);
        }
    }
}


int main ()
{
    int fd;
    char *buffer;
    //int nbyte = 6;
    //int i = 0;
    
    fd = open("get_next_line.c", O_RDONLY);
    
    
    buffer = ft_read(fd);
    printf("printf : %s\n", buffer);
     buffer = ft_read(fd);
    printf("\n\n%s", buffer);
    
    
}