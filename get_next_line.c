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

char *ft_check(char *str)
{
    int i;
    
    i = 0;
    while (str[i] && str[i] != '\n')
    {
    return(str);
        i++;
    }
    return ("test");
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
        line = ft_strjoin(line, buff);
        //int a = 0;
        if (newline(buff) == 1)
        {
            free(buff);
            return (line);
        }
    }
}

int main ()
{
    int fd;
    char *buffer;
    //int nbyte = 6;
    //int i = 0;
    fd = open("test", O_RDONLY);
    buffer = ft_read(fd);
    printf("%s", buffer);
    
    char *str = "oussama\nzahidwalo";
    printf("%s", ft_check(str));
    
    
}