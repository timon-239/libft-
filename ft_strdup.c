/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 16:00:27 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 13:56:22 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p1;
	size_t	len;

	len = ft_strlen(s1);
	p1 = malloc(sizeof(char) * (len + 1));
	if (!p1)
		return (NULL);
	ft_memcpy(p1, s1, len);
	p1[len] = '\0';
	return (p1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "Hallo 42";
	char	*copy;

	copy = ft_strdup(str);
	if (copy)
	{
		printf("Original: %s\n", str);
		printf("Kopie:    %s\n", copy);
		free(copy);
	}
	return (0);
}*/
