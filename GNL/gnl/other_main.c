#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <limits.h>

char	*get_next_line(int fd);

void leak (void)
{
	system("leaks a.out");
}

int	main(int ac, char **av)
{
	int		fd=0;
	char	*line;
	int		num;

	if (ac == 2)
		fd = open(av[1], O_RDONLY);
	if (fd == -1)
		printf("Error");
	else
	{
		num = 1;
		line = get_next_line(fd);
		while (line)
		{
			printf("%i- %s", num, line);
			free(line);
			line = get_next_line(fd);
			num++;
		}
		printf("%i- %s", num, line);
	}

	while (1) {
	}

	close(fd);
	atexit(leak);
	return (0);
}
