#include "get_next_line.h"

#define texte "./files/41_no_nl"
int	main(void)
{
	int		fd;
	char	*line;

	fd = open(texte, O_RDWR);

	line = "";
	while (line)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
	}
	return (0);
}