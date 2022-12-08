/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:31:15 by joterret          #+#    #+#             */
/*   Updated: 2022/12/08 17:59:00 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

//NOTE - Retourne la longueur de la string
size_t	gnl_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != 0)
		i++;
	return (i);
}

//NOTE - This returns a pointer to the first occurrence of the character c in the string str, or NULL if the character is not found. 
char	*gnl_strchr(const char *str, int c)
{
	int	i;
	int	len;

	i = 0;
	len = gnl_strlen(str)+1;
	while (i < len)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}

//NOTE - Copie une string d'une source a une destination et retourne ca longueur
size_t	gnl_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (gnl_strlen(src));
	i = 0;
	while (src[i] != 0 && i < dstsize)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (gnl_strlen(src));
}

//NOTE - Rasseemble deux string ensemble
char	*gnl_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*s3;

	i = -1;
	j = -1;
	len = gnl_strlen(s1) + gnl_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (0);
	s3 = malloc(sizeof (*s3) * len + 1);
	if (s3 == NULL)
		return (0);
	while (s1[++i] != 0)
		s3[i] = s1[i];
	while (s2[++j] != 0)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
