#include "get_next_line_bonus.h"

int newline(char *str)
{ 
    int i;
    i = 0;
    
    if (!str)
        return (0);
    while (str[i])
    {
        if (str[i] == '\n')
        {
            return(1);
        }
        i++;
    }
    return (0);
}

char *ft_check(char *str)
{
    int i;
    char *dst;
    
    i = 0;
    if (!str[i])
    {
        free(str);
        return (0);
    }
    while (str[i] && str[i] != '\n')
        i++;
    i += (str[i] == '\n');
    dst = malloc(sizeof(char) * i + 1);
    if (!dst)
        return (0);
    i = 0;
    while (str[i] && str[i] != '\n')
    {
        dst[i] = str[i];
        i++;
    }
    if (str[i] == '\n')
    {
        dst[i] = str[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);   
}

char *ft_rest(char *str)
{
    char *rest;
    int i;
    int a;
    
    i = 0;
    a = 0;
    if (!str)
        return (0);
    while (str[i] && str[i] != '\n')
        i++;
    i += (str[i] == '\n');
    rest = malloc(sizeof(char) * ft_strlen(str) - i + 1);
    if (!rest)
        return (0);
    while(str[i])
    {
        rest[a++] = str[i++];
    }
    rest[a] = '\0';
    free(str);
    return (rest);
}

char    *ft_read(int fd, char *buffer)
{
    char    *line;
    int     nb;
    
    nb = 1;
    line = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!line)
        return (0);
    while (!newline(buffer) && nb != 0)
    {
        nb = read(fd, line, BUFFER_SIZE);
        if (nb == 0)
        {
            free(line);
            return (buffer);
        }
        if (nb == -1)
        {
            free(buffer);
            free(line);
            return (0);
        }
        line[nb] = 0;
        buffer = ft_strjoin(buffer, line);
    }
    free(line);
    return(buffer);
}

char    *get_next_line(int fd)
{
    static char *buffer[1024];
    char        *line;
    
    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    buffer[fd] = ft_read(fd, buffer[fd]);
    if (!buffer[fd])
        return (0);
    line = ft_check(buffer[fd]);
    if (line == 0)
        return (0);
    buffer[fd] = ft_rest(buffer[fd]);
    return (line);
}

// int main ()
// {
//     int fd;
//     char *buffer;
//     fd = open("test", O_RDONLY);
//     buffer = get_next_line(fd);
//     while(buffer)
//     {
//         printf("%s",buffer);
//         buffer = get_next_line(fd);
//     }
// }