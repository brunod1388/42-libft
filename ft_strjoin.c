/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgoncalv <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:21:49 by bgoncalv          #+#    #+#             */
/*   Updated: 2021/10/25 17:23:00 by bgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*d;

	d = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, s1, ft_strlen(s1) + 1);
	ft_strlcpy(&d[ft_strlen(s1)], s2, ft_strlen(s2) + 1);
	return (d);
}