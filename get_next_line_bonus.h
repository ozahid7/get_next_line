/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozahid- <ozahid-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 23:57:38 by ozahid-           #+#    #+#             */
/*   Updated: 2022/04/16 02:45:58 by ozahid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

char *ft_strjoin(char  *s1, char  *s2);
size_t	ft_strlcat(char *dst, char *src);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(char *str);
char	*ft_strdup(char *str);
char    *get_next_line(int fd);


#endif