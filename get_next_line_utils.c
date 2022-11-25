/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:31:15 by joterret          #+#    #+#             */
/*   Updated: 2022/11/25 04:18:39 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
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

size_t		retlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '0' && str[i] != '\n')
		i++;
	return (i + 1);
}

int		find_n(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int		find_zero(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] == 0)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = 0;
	while (src[i] != 0 && i < dstsize - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}


char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*s3;

	i = -1;
	j = -1;
	len = ft_strlen(s1) + ft_strlen(s2);
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
