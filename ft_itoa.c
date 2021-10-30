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

static int	ft_ilen(int n)
{
	int	l;

	l = 0;
	if (n < 1)
		l++;
	while (n)
	{
		l++;
		n /= 10;
	}
	return (l);
}

char *ft_itoa(int n)
{
	int		l;
	char	*s;

	l = ft_ilen(n);
	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	s[l] = 0;
	if (n == 0)
		*s = '0';
	if (n < 0)
	{
		*s = '-';
		s[--l] = '0' + (-(long)n) % 10;
		n /= -10;
	}
	while (n)
	{
		s[--l] = '0' + n % 10;
		n /= 10;
	}
	return (s);
}