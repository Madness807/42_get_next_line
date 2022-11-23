/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:39:21 by joterret          #+#    #+#             */
/*   Updated: 2022/11/23 21:40:24 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define texte "texte.txt"
int	main(void)
{
	int		fd;
	char	*line;
	int i;


	fd = open(texte, O_RDWR);

	i = 0;
	while (line != 0)
	{
		line = get_next_line(fd);
		printf("Impression de la ligne: %d\n", i);
		printf("%s\n", line);
		i++;
	}
	return (0);
}
