/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joterret <joterret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 03:08:18 by joterret          #+#    #+#             */
/*   Updated: 2022/12/09 18:21:33 by joterret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

//NOTE - Includes 
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

//NOTE - Buffer size
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif

//NOTE - Fonction principal
char	*get_next_line(int fd);
char	*gnl_getline(char *stock);
char	*gnl_update_stock(char *stock);
char	*gnl_read_stock(int fd, char *stock);
//NOTE - Utils
size_t	gnl_strlen(const char *str);
int		gnl_strchr(const char *str, int c);
char	*gnl_strjoin(char const *s1, char const *s2);

#endif
