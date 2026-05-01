/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 14:09:58 by tireis           #+#    #+#              */
/*   Updated: 2026/05/01 16:16:39 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[5];
	char	*src = "Hallo Welt";
	size_t	res;

	res = ft_strlcpy(dest, src, 5);
	printf("Dest: %s\n", dest);
	printf("Res (src len): %zu\n", res);
	return (0);
}*/
