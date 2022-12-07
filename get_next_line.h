/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:59:38 by garibeir          #+#    #+#             */
/*   Updated: 2022/12/07 18:15:50 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUF_SIZE
#  define BUF_SIZE 4096
# endif

char	*get_next_line(int fd);
int		get_len(int fd);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *s);
int		ft_clean(char *s);
#endif