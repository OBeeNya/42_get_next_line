#include "get_next_line.c"
#include "fcntl.h"
#include <stdio.h>

int	main(void)
{
	int	fd;
	int	i;
	char	*line;

	fd = open("text.txt", O_RDONLY);
	i = 0;
	while (i < 9)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
		printf("---stop---\n");
		i++;
	}
	return (0);
}
