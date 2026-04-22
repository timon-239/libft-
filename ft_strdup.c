/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timonreis <tireis@student.42vienna.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 19:01:00 by timonreis         #+#    #+#             */
/*   Updated: 2026/04/22 10:14:15 by timonreis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strdup(const char *s1)
{
	char	*p1;
	int		len;

	len = ft_strlen(s1);
	p1 = malloc(len);
	if (!p1)
		return (NULL);
	return (p1);
}
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = ft_strdup("HALLO");
	printf("%s", s);
}
