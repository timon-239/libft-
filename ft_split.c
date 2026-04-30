/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 15:12:16 by tireis           #+#    #+#              */
/*   Updated: 2026/04/30 14:26:17 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	**ft_free_array(char **res, int i)
{
	while (i >= 0)
	{
		free(res[i]);
		i--;
	}
	free(res);
	return (NULL);
}

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
	size_t	i;
	size_t	word_len;

	i = 0;
	res = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!res || !s)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			res[i++] = ft_substr(s, 0, word_len);
			if (!res[i - 1])
				return (ft_free_array(res, i - 2));
			s += word_len;
		}
	}
	res[i] = NULL;
	return (res);
}

/*#include <stdio.h>

int	main(int ac, char **av)
{
	char	**res;
	int		i;

	i = 0;
	res = ft_split("A-B-C", '-');
	if (!res)
		return (1);
	while (res[i])
	{
		printf("%s\n", res[i]);
		free(res[i++]);
	}
	free(res);
	return (0);
}*/
