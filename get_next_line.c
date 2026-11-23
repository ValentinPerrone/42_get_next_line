/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <vaperron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:26:06 by vaperron          #+#    #+#             */
/*   Updated: 2026/11/22 22:27:35 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	#ifndef BUFFER_SIZE
		#define BUFFER_SIZE 32
	#endif
	static char *leftover;
	char	*buf;
	char 	*buf2;
	int		mult[1];

	mult[0] = 1;
	buf = malloc((BUFFER_SIZE * mult[0]) * sizeof(char));
	read(fd, buf, (BUFFER_SIZE * mult[0]));
	return (buf);
}

void	loop1(char *to, char *from)
{

}