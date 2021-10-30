/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:35:16 by bgoncalv          #+#    #+#             */
/*   Updated: 2021/10/25 17:35:18 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const char	*d;
	size_t		i;

	i = 0;
	d = (void *) s;
	while (d[i] && i < n)
	{
		if ((char) d[i] == c)
			break;
		i++;
	}
	if ((char) d[i] == c && i < n)
			return ((void *) d + i);
	return (NULL);
}
