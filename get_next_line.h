/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:08:18 by joterret          #+#    #+#             */
/*   Updated: 2022/11/23 21:45:43 by joterret         ###   ########.fr       */
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
int		retlen(char *str);
size_t	ft_strlen(const char *str);
int		find_n(char *str);
void	*ft_memcpy(void *dest, const void *source, size_t size);

#endif

//Buffer size
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 15
#endif