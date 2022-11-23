/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/11/23 22:10:25 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{		
	char	strreaded[BUFFER_SIZE + 1];
	char			*retstr;
	static char		*strtmp;
	ssize_t			nbr_of_byte_read;
	int i = 0;

	if (!fd)
		return (0);
	nbr_of_byte_read = read(fd, strreaded, BUFFER_SIZE);
	strreaded[BUFFER_SIZE] = '\0';
	if (strtmp == NULL)
	if (nbr_of_byte_read <= 0)
		return (0);

	

	while (strreaded[i] != 0)
	{
		if (find_n(strreaded) == 1)
		{	
			retstr = malloc(retlen(strreaded) * sizeof(char) + 1);
			ft_memcpy(retstr, strreaded, retlen(strreaded));

			
			//ft_memcpy(strtmp, strreaded + retlen(strreaded),  ft_strlen(strreaded) - retlen(strreaded));
			//strtmp[ft_strlen(retstr) - retlen(strreaded)] = 0;
			return (retstr);
		}
		i++;
	}

	return (0);
}

