#include "get_next_line.h"

#define texte "./empty.txt"
int	main(void)
{
	int		fd;
	char	*line;

	fd = open(texte, O_RDWR);



	// line = "";
	for (int i = 0; i < 10; i++)
	{
		line = get_next_line(fd);
		printf("%s\n", line);
	}
	return (0);
}