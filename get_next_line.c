/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jo <jo@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 04:01:24 by jo                #+#    #+#             */
/*   Updated: 2022/12/08 13:22:18 by jo               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//NOTE - apres un tour de magie retourne la string
char	*get_next_line(int fd)
{	
	char 		*line;
	static char	*stock;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	stock = gnl_read_stock(fd, stock);
	if (!stock)
		return (NULL);
	line = gnl_getline(stock);
	stock = gnl_update_stock(stock);
	return (line);
}
//NOTE - retourne la ligne avant un retour a la ligne 
char 	*gnl_getline(char *stock)
{
	size_t	retlen;
	char	*line;

	retlen = 0;
	if (!stock[retlen])
		return (NULL);
	while (stock[retlen] != '\n' || stock[retlen])
		retlen++;
	line = malloc((retlen + 1) * sizeof(char));
	if (!line)
		return (NULL);
	
	//REVIEW - c est pas mon code----------------------------------------------------------------------
	while (stock[retlen] && stock[retlen] != '\n')
	{
		line[retlen] = stock[retlen];
		retlen++;
	}
	if (stock[retlen] == '\n')
	{
		line[retlen] = stock[retlen];
		retlen++;
	}
	line[retlen] = '\0';
	//REVIEW - c est pas mon code -----------------------------------------------------------------------

	return (line);
}
//NOTE - lit le stock temporaire a inclure dans la variable static 
char	*gnl_read_stock(int fd, char *stock)
{
	char *buf;
	ssize_t	nbr_bytes_readed;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	nbr_bytes_readed = 1;

	//REVIEW - c est pas mon code
	while (!gnl_strchr(stock, '\n') && nbr_bytes_readed)
	{
		nbr_bytes_readed = read(fd, buf, BUFFER_SIZE);
		if (nbr_bytes_readed == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[nbr_bytes_readed] = '\0';
		stock = gnl_strjoin(stock, buf);
	}
	free(buf);
	return (stock);
	//REVIEW - c est pas mon code
}
//NOTE - 
char	*gnl_update_stock(char *stock)
{
	//REVIEW - c est pas mon code------------------------------------------------------------
	int		i;
	int		j;
	char	*new_stock;

	i = 0;
	while (stock[i] && stock[i] != '\n')
		i++;
	if (!stock[i])
	{
		free(stock);
		return (NULL);
	}
	new_stock = (char *)malloc((gnl_strlen(stock) - i + 1) * sizeof(char));
	if (!stock)
		return (NULL);
	i++;
	j = 0;
	while (stock[i])
	{
		new_stock[j++] = stock[i++];
	}
	new_stock[j] = '\0';
	free(stock);
	return (new_stock);
	//REVIEW - c est pas mon code -------------------------------------------------------------
}
