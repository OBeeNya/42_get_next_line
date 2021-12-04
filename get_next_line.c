/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baubigna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:55:45 by baubigna          #+#    #+#             */
/*   Updated: 2021/12/04 17:02:37 by baubigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static ssize_t	bytes_read;
	char			*buf;

	if (fd == -1)
		return (NULL);
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	while (!is_line(buf))
		bytes_read = read_bytes(fd, buf, BUFFER_SIZE);
	get_line_len(buf);

}
