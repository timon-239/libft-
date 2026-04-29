/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 16:01:49 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:12:32 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*a;

	a = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			a = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a;
	char	*res;

	a = 'A';
	res = ft_strrchr("HALLA", a);
	printf("%s", res);
}*/
