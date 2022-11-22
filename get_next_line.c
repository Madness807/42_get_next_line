/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/11/22 19:46:10 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{		
	char	tmpstr[BUFFER_SIZE + 1];
	char	*retstr;
	//int		nbr_of_byte_read;
	int		i = 0;

	if (!fd)
		return (0);

	//nbr_of_byte_read = read(fd, tmpstr, BUFFER_SIZE);

	//printf("%d", nbr_of_byte_read);

	while (tmpstr[i] != '\n')
	{
		retstr = tmpstr;
		i++;
	}
	return (retstr);
}
