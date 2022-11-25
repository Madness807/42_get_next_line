/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/11/25 05:08:08 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{		
	char			strreaded[BUFFER_SIZE + 1];
	char			*retstr;
	static char		*strtmp;
	ssize_t			nbr_of_byte_read;
	int				i;

	i = 0;
	if (!fd)
		return (0);
	nbr_of_byte_read = read(fd, strreaded, BUFFER_SIZE);
	strreaded[BUFFER_SIZE] = '\0';
	if (nbr_of_byte_read <= 0)
		return (0);
		
	

	while (find_n(strreaded) != 1)
		strtmp = 











	
	while (strreaded[i] != 0)
	{	
		
		if (find_n(strreaded) == 1)
		{	
			retstr = malloc(sizeof(char) *(retlen(strreaded) + 1));
			ft_strlcpy(retstr, strreaded, retlen(strreaded));
			retstr[retlen(strreaded)] = '\0';
			return (retstr);
			free(retstr);
		}
		i++;
	}
	return (0);
}
