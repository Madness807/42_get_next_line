/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:31:15 by joterret          #+#    #+#             */
/*   Updated: 2022/12/07 11:41:56 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*NOTE - RETOURNE LA LONGUEUR DE LA STRING/*
size_t	gnl_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
/*NOTE - RETOURN LA TAILLE DE LA STRING A LA RENCONTRE DUN ZERO OU DUN /N */
size_t	gnl_retlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '0' && str[i] != '\n')
		i++;
	return (i + 1);
}
/*NOTE - CHERCHE SI UN RETOUR A LA LIGNE EST PRESENT*/
int		gnl_find_newline(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = gnl_strlen(str);
	while (i < len)
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
/*NOTE - CHERCHE UN CARACTERE DANS LA STRING*/
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
/*NOTE - CHERCHE LA PRESENCE DUN 0 DANS LA STRING */
int		gnl_find_zero(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = gnl_strlen(str);
	while (i < len)
	{
		if (str[i] == 0)
			return (1);
		i++;
	}
	return (0);
}
//NOTE - COPIE LA STRING 
size_t	gnl_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (gnl_strlen(src));
	i = 0;
	while (src[i] != 0 && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (gnl_strlen(src));
}
//NOTE - RASSEMBLE DEUX STRING EN UNE
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
