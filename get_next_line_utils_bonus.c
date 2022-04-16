/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahid- <ozahid-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 00:06:55 by ozahid-           #+#    #+#             */
/*   Updated: 2022/04/16 02:43:00 by ozahid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
size_t ft_strlen(char *str)
{
	size_t i;

	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, char *src)
{
	size_t i;
	size_t dlen;

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

char *ft_strdup(char *s)
{
	char *dest;
	int i;
	size_t len;

	i = 0;
	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_strjoin(char *s1, char *s2)
{
	char    *str;
	int     len;
	
	len = 0;
	if (s1)
		len = ft_strlen(s1);
	len += ft_strlen(s2);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	*str = 0;
	ft_strlcat(str, s1);
	ft_strlcat(str, s2);
	free(s1);
	return (str);
}