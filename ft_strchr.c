/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timonreis <tireis@student.42vienna.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 21:48:57 by timonreis         #+#    #+#             */
/*   Updated: 2026/04/21 12:27:31 by timonreis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
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
