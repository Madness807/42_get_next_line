/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo <jo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/12/08 03:55:20 by jo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{		
	static t_list	*stash = NULL;
	char			*line;
	ssize_t		nb_readed_bytes;

	if (fd < 0 || BUFFER_SIZE < 0 || read(fd, &line, 0) < 0)
		return (0);


	//NOTE -  - 1: Parcourir le fichier (fd)
	//TODO - 2: Copie le fichier dans la string temporaire
	//TODO - 3: Parcour la string temporaire jusqua trouver un /n et la retourne en temp que ligne








	while (/*TODO - TROUVER LA CONDITION DE LA BOUCLE*/)
	{
		nb_readed_bytes = read(fd, str_tmp, BUFFER_SIZE);
		str_tmp[nb_readed_bytes] = '\0';

		if (str_file == NULL)
			str_file = ft_strjoin("", str_tmp);
		else
			str_file = ft_strjoin()

	}
	return (0);
}
