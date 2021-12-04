/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:01:08 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/04 17:02:42 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	read_bytes(int fd, char *buf, size_t buffer_size)
{
	static ssize_t	bytes_read;

	bytes_read += read(fd, buf, buffer_size);
	return (bytes_read);
}

int	is_line(char *buf)
{
	while (*buf)
	{
		if (*buf == '\n')
			return (1);
		buf++;
	}
	return (0);
}

size_t	get_line_len(char *buf)
{
	size_t	len;

	len = 0;
	while (buf[len])
	{
		if (buf[len++] == '\n')
			return (len);
	}
	return (0);
}
