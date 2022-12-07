/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/12/07 11:39:19 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{		
	static char str_saved[BUFFER_SIZE + 1] = "";
	char		str_tmp[BUFFER_SIZE + 1];
	char		*str_file = NULL;
	ssize_t		nb_readed_bytes;

	//NOTE -  - 1: Parcourir le fichier (fd)
	//TODO - 2: Copie le fichier dans la string temporaire
	//TODO - 3: Parcour la string temporaire jusqua trouver un /n et la retourne en temp que ligne





	while (/*TODO - TROUVER LA CONDITION DE LA BOUCLE*/)
	{
		nb_readed_bytes = read(fd, str_tmp, BUFFER_SIZE);
		str_tmp[nb_readed_bytes] = '\0';

		if (str_file == NULL)//FIXME - corrriger cette merde
			str_file = ft_strjoin("", str_tmp);
		else
			str_file = ft_strjoin()

	}
	return (0);
}
