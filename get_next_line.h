/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahid- <ozahid-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 23:57:38 by ozahid-           #+#    #+#             */
/*   Updated: 2022/03/31 21:52:08 by ozahid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H





#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_strjoin(char  *s1, char  *s2);
size_t	ft_strlcat(char *dst, char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(char *str);
char	*ft_strdup(char *str);


#endif