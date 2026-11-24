/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <vaperron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:26:06 by vaperron          #+#    #+#             */
/*   Updated: 2026/11/23 22:47:02 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	#ifndef BUFFER_SIZE
		#define BUFFER_SIZE 32
	#endif
	static char	leftover[BUFFER_SIZE];
	char	*buf;
	char	*temp;

	temp = NULL;
	buf = malloc(BUFFER_SIZE + ft_strlen(leftover));
	ft_strlcpy(buf, leftover, ft_strlen(leftover));
	read(fd, buf + ft_strlen(leftover), BUFFER_SIZE);
	while(nl_check(buf, leftover) != 1)
	{
		temp = malloc(ft_strlen(buf));
		ft_strlcpy(temp, buf, ft_strlen(buf) + 1);
		free(buf);
		buf = malloc(ft_strlen(temp) + BUFFER_SIZE);
		ft_strlcpy(buf, temp, ft_strlen(temp) + 1);
		read(fd, &buf[ft_strlen(temp)], BUFFER_SIZE);
	}
	free(temp);
	return (buf);
}
/*
void	loop1(char *buf, int fd)
{

}*/