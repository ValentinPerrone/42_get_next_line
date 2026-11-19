/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <vaperron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:26:06 by vaperron          #+#    #+#             */
/*   Updated: 2026/11/14 01:46:23 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	#ifndef BUFFER_SIZE
		#define BUFFER_SIZE 32
	#endif
	char	*buf;
	static char *leftover;

	buf = malloc((BUFFER_SIZE + 1) * sizeof(char));
	buf[BUFFER_SIZE + 1] = '\0';
	read(fd, buf, BUFFER_SIZE);
	while (nl_check(buf, leftover) == 0)
	{
		
		read(fd, buf, BUFFER_SIZE);
	}
}