/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/23 14:41:56 by tireis           #+#    #+#              */
/*   Updated: 2026/05/01 15:20:53 by tireis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f((unsigned int)i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char	test_f(unsigned int i, char c)
{
	return (c + i);
}

int	main(void)
{
	char	*s = "abc";
	char	*r;

	r = ft_strmapi(s, test_f);
	if (!r)
		return (1);
	printf("orig: %s\n", s);
	printf("res:  %s\n", r);
	free(r);
	return (0);
}*/
