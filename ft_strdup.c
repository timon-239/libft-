/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timonreis <tireis@student.42vienna.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 19:01:00 by timonreis         #+#    #+#             */
/*   Updated: 2026/04/22 10:39:41 by timonreis        ###   ########.fr       */
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
