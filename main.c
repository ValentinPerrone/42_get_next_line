/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <vaperron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 17:29:43 by vaperron          #+#    #+#             */
/*   Updated: 2026/11/21 18:35:06 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void) 
{
	int fd = open("hola.txt", O_RDONLY);
	get_next_line(fd);
	close(fd);
	return 0;
}