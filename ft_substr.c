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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	dlen;

	if (start > ft_strlen(s))
		return (NULL);
	dlen = ft_strlen(s) - start;
	if (dlen > len)
		dlen = len;
	d = malloc(dlen + 1);
	if (d == NULL)
		return (NULL);
	ft_strlcpy(d, &s[start], dlen + 1);
	return (d);
}
