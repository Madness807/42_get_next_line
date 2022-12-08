#include "get_next_line.h"

#define texte "texte.txt"
int	main(void)
{
	int		fd;
	char	*line;

	fd = open(texte, O_RDWR);

	line = get_next_line(fd);
	while (line)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
	}
	return (0);
}