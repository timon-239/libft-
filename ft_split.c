/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tireis <tireis@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:12:16 by tireis            #+#    #+#             */
/*   Updated: 2026/04/22 17:30:37 by tireis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}
char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	size_t	word_len;

	i = 0;
	res = malloc(sizeof(char *) * ft_countwords(s, c) + 1);
	if (!res || !s)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			res[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	return (res);
}
/*#include <stdio.h>
int	main(int ac, char **av)
{
	if (ac < 2)
		return (0);
	else
		for(int i = 0; i < ft_strlen(av[]))
		{

		}
}*/
