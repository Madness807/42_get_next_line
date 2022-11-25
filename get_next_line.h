/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:08:18 by joterret          #+#    #+#             */
/*   Updated: 2022/11/25 04:36:32 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_H
# define FT_GNL_H

//INCLUDE-----------------------------------------------------------------------
#include	<unistd.h>
#include	<stdio.h>
#include	<fcntl.h>
#include	<sys/types.h>
#include	<sys/uio.h>
#include	<unistd.h>
#include	<stdlib.h> 

//Prototype de fonction---------------------------------------------------------
char	*get_next_line(int fd);

//Prototype de fonction suplementaire-------------------------------------------
size_t		retlen(char *str);
size_t	ft_strlen(const char *str);
int		find_n(char *str);
int		find_zero(char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);

#endif

//Buffer size
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 100
#endif