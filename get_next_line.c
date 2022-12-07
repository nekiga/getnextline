/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: garibeir < garibeir@student.42lisboa.com > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:59:14 by garibeir          #+#    #+#             */
/*   Updated: 2022/12/07 18:19:16 by garibeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUF_SIZE + 1];
	char		*line;

	if (read(fd, 0, 0) < 0)
		return (NULL);
	line = NULL;
	while (buffer[fd][0] || read(fd, buffer[fd], BUF_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer[fd]);
		if (ft_clean(buffer[fd]) == 1)
			break ;
	}
	return (line);
}

