/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 14:11:45 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:13:53 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	ft_memcpy(subs, s + start, len);
	subs[len] = '\0';
	return (subs);
}

/*#include <stdio.h>

int	main(void)
{
	char	*s = "0123456789";
	char	*r;

	r = ft_substr(s, 2, 3);
	printf("res: %s\n", r); // "234"
	free(r);

	r = ft_substr(s, 15, 5);
	printf("empty: [%s]\n", r); // ""
	free(r);

	return (0);
}*/
