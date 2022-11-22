/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:39:21 by joterret          #+#    #+#             */
/*   Updated: 2022/11/22 19:39:44 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define texte "texte.txt"
int	main(void)
{
	int		fd;
	char	*line;
	int		i;

	i = 0;
	fd = open(texte, O_RDWR);
	while (i < 100)
	{
		line = get_next_line(fd);
		printf("Impression de la ligne: %d\n", i);
		printf("%s\n", line);
		i++;
	}
	return (0);
}
