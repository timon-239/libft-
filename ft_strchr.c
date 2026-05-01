/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 14:11:21 by tireis           #+#    #+#              */
/*   Updated: 2026/04/30 17:23:30 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	target;

	target = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == target)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (target == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*#include <stdio.h>

int	main(void)
{
	const char	str[] = "Over";
	char		c;
	char		*res;

	c = 'r';
	res = ft_strchr(str, c);
	printf("%s", res);
}*/
