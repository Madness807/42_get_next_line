/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:08:18 by joterret          #+#    #+#             */
/*   Updated: 2022/11/22 19:34:19 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GNL_H
# define FT_GNL_H

//INCLUDE-----------------------------------------------------------------------
#include	<unistd.h>
#include	<stdio.h>
#include	<fcntl.h>

//Prototype de fonction---------------------------------------------------------
char	*get_next_line(int fd);

//Prototype de fonction suplementaire-------------------------------------------
int	ft_strlen(char *str);

#endif

//Buffer size
#ifndef BUFFER_SIZE
# define BUFFER_SIZE 50
#endif