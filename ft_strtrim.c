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

static int		ft_ischarset(int c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

static size_t	ft_count_charset(char const *s, char const *set)
{
	size_t i;
	
	i = 0;
	while (*s)
		if (ft_ischarset(*s++, set))
			i++;
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*d;
	size_t	dlen;

	dlen = ft_strlen(s1) - ft_count_charset(s1, set);
	d = malloc(dlen + 1);
	if (d == NULL)
		return (NULL);
	while (*s1)
	{
		if (!ft_ischarset(*s1, set))
			*d++ = *s1;
		s1++;
	}
	*d = 0;
	return (d - dlen);
}