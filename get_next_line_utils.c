/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <vaperron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:26:08 by vaperron          #+#    #+#             */
/*   Updated: 2026/11/21 18:32:27 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	nl_check(char *buf, char *leftover)
{
	int	i;
	int j;
	int	nl_chk;

	i = 0;
	nl_chk = 0;
	while (buf[i++])
	{
		if (nl_chk == 1)
			break;
		if (buf[i] == '\n')
			nl_chk = 1;
		i++;
	}
	while (nl_chk == 1 && buf[i++])
	{
		leftover[j] = buf[i];
		j++;
	}
	return (0);
}