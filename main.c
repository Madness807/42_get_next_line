#include "get_next_line.h"

#define texte "texte.txt"
int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	fd = open(texte, O_RDWR);

	i = 0;
	//while (line != 0)
	//{
		line = get_next_line(fd);
		printf("%s\n", line);
		i++;
	//}
	return (0);
}