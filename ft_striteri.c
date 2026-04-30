/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/23 14:46:30 by tireis           #+#    #+#              */
/*   Updated: 2026/04/30 17:24:16 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	my_test_func(unsigned int i, char *c)
{
	if (i % 2 != 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char	str[] = "hallo welt";

	ft_striteri(str, my_test_func);
	printf("Res: %s\n", str);
	return (0);
}*/
