/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 14:07:58 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 13:32:41 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	i = 0;
	ptr = (const unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Lets find the A";
	char	*res;

	res = ft_memchr(str, 'A', 20);
	printf("%s", res);
}*/
