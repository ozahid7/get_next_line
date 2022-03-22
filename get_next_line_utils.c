/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahid- <ozahid-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 00:06:55 by ozahid-           #+#    #+#             */
/*   Updated: 2022/03/22 03:57:17 by ozahid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
size_t	ft_strlen(char *str)
{
    size_t i;
    
    i = 0;
    if (str == 0)
        return (0);
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t	ft_strlcat(char *dst, char *src)
{
	size_t	i;
	size_t	dlen;

	if (src == 0)
		return (0);
	dlen = ft_strlen(dst);
	i = 0;
	while (src[i])
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

char *ft_strjoin(char *s1, char *s2)
{
    char *str;
    
    str = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (str == NULL)
        return (NULL);
    ft_bzero(str, ft_strlen(str));
	ft_strlcat(str, s1);
	ft_strlcat(str, s2);
    return (str);
}