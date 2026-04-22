/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tireis <tireis@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:12:16 by tireis            #+#    #+#             */
/*   Updated: 2026/04/22 15:58:41 by tireis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_countword(char const *s, char c)
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
	res = malloc(sizeof(char *) * ft_counwords(s, c) + 1);
	if (!res || !lst)
		return (NULL);
}
