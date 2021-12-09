/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 11:55:20 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/08 12:47:10 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	s2 = malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
		if (!*s++)
			return (0);
	return ((char *)s);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (ft_strlen(s) < len)
		substr = malloc(ft_strlen(s) - start + 1);
	else
		substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (start < ft_strlen(s) && i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*strjoin;
	size_t	i;

	strjoin = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!strjoin)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (i - ft_strlen(s1) < ft_strlen(s2))
	{
		strjoin[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
