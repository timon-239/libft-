/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 14:11:06 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:09:08 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while (needle[j] && (i + j) < len && haystack[i + j] == needle[j])
		{
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h"

int	main(void)
{
	char	*h = "lorem ipsum dolor";
	char	*n = "ipsum";
	char	*res;

	res = ft_strnstr(h, n, 15);
	if (res)
		printf("f: %s\n", res);
	else
		printf("nf\n");

	res = ft_strnstr(h, n, 5);
	if (!res)
		printf("limit ok\n");
	return (0);
}*/
