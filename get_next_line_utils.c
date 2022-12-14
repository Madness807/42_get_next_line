/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:31:15 by joterret          #+#    #+#             */
/*   Updated: 2022/12/14 02:18:08 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

int	gnl_strchr(char *str, int c)
{
	int	i;
	int	len;

	i = 0;
	len = gnl_strlen(str) + 1;
	while (i < len && str[i])
	{
		if (str[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	int		len;
	char	*s3;
	/*
	if (!s1)
	{
		s1 = malloc(sizeof (char) * 1);
		s1[0] = '\0';
	}*/
	
	i = -1;
	j = -1;
	len = gnl_strlen(s1) + gnl_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s3 = malloc(sizeof (*s3) * (len + 1));
	if (s3 == NULL)
		return (NULL);
	while (s1[++i] != 0)
		s3[i] = s1[i];
	while (s2[++j] != 0)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	free(s1);
	return (s3);
}
