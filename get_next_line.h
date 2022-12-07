/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:08:18 by joterret          #+#    #+#             */
/*   Updated: 2022/12/07 11:19:12 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_H
# define FT_GNL_H

//SECTION - Include - ---------------------------------------------------------
#include	<unistd.h>
#include	<stdio.h>
#include	<fcntl.h>
#include	<sys/types.h>
#include	<sys/uio.h>
#include	<unistd.h>
#include	<stdlib.h> 

//SECTION - Fonction principal-------------------------------------------------
char		*get_next_line(int fd);

//SECTION -  - Fonction suplementaire------------------------------------------------
size_t	gnl_retlen(char *str);
size_t	gnl_strlen(const char *str);
int		gnl_find_newline(char *str);
char	*gnl_strchr(const char *str, int c)
int		gnl_find_zero(char *str);
size_t	gnl__strlcpy(char *dest, const char *src, size_t dstsize);
char	*gnl_strjoin(char const *s1, char const *s2);

#endif

//NOTE - Buffer size-----------------------------------------------------------
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 100
#endif