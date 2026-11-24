/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaperron <vaperron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:26:08 by vaperron          #+#    #+#             */
/*   Updated: 2026/11/23 22:39:36 by vaperron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	nl_check(char *buf, char *leftover)
{
	int	i;
	int j;
	int	nl_chk; 

	i = 0;
	j = 0;
	nl_chk = 0;
	while (buf[i++])
	{
		if (nl_chk ==1)
			break;
		if (buf[i] == '\n')
			nl_chk = 1;
	}
	while (nl_chk == 1 && buf[i])
	{
		leftover[j] = buf[i];
		buf[i] = '\0';
		j++;
		i++;
	}
	if(nl_chk == 1)
		return(1);
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (i >= size)
		i--;
	if (size != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}