/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 14:09:32 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:00:34 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	destlen = 0;
	while (destlen < size && dest[destlen])
		destlen++;
	i = 0;
	if (size <= destlen)
		return (size + srclen);
	while (src[i] && size > (i + destlen + 1))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (destlen + srclen);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hallo";
	char	*src;
	size_t	res;

	src = " Welt!";
	res = ft_strlcat(dest, src, 20);
	printf("Str: %s\n", dest);
	printf("Res: %zu\n", res);
	return (0);
}*/
