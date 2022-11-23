/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:31:15 by joterret          #+#    #+#             */
/*   Updated: 2022/11/23 22:12:57 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	retlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '0' && str[i] != '\n')
		i++;
	return (i);
}

int		find_n(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str)+1;
	while (i < len)
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	*ft_memcpy(void *dest, const void *source, size_t size)
{
	size_t	i;

	i = 0;
	if (dest == 0 && source == 0)
		return (0);
	while (i < size)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)source)[i];
		i++;
	}
	return (dest);
}

