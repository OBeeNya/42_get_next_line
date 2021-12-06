/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:55:45 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/06 17:20:18 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_line(int fd, char *next_line)
{
	char	*buf;
	ssize_t	bytes;

	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	while (!ft_strchr(buf, '\n'))
	{
		bytes = read(fd, buf, BUFFER_SIZE);
	}
	return (buf);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*next_line;

	next_line = "\0";
	next_line = get_line(fd, next_line);
	return (next_line);
}
