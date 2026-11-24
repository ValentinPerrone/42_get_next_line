/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <vaperron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 17:29:43 by vaperron          #+#    #+#             */
/*   Updated: 2026/11/23 22:24:47 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void) 
{
	int fd = open("hola.txt", O_RDONLY);
	char *line;

	line = get_next_line(fd);
	printf("l1 %s", line);
	free(line);
	line = get_next_line(fd);
	printf("l2 %s", line);
	free(line);
	line = get_next_line(fd);
	printf("l3 %s", line);
	free(line);
	close(fd);
	return 0;
}