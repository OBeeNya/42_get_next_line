/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:01:08 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/06 17:20:16 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	char	*r;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	a = ft_strlen(s1) + ft_strlen(s2);
	r = malloc(a + 1);
	if (!r)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		r[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		r[i + j] = s2[j];
		j++;
	}
	r[i + j] = '\0';
	return (r);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}

char	*copy_line(char *line)
{
	char 	*cpy;
	size_t	l;
	size_t	i;

	l = 0;
	while (line[l])
	{
		if (line[++l] == '\n')
			break ;
		l++;
	}
	cpy = malloc(l + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < l)
	{
		cpy[i] = line[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
