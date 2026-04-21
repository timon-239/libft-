/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timonreis <tireis@student.42vienna.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:46:55 by timonreis         #+#    #+#             */
/*   Updated: 2026/04/21 11:36:02 by timonreis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
			return (*needle);
		if (*needle == '\0')
			return (NULL);
		if (haystack[i] != needle[j])
			return (*haystack);
		i++;
	}
}
int	main(void)
{
	char	*a;

	a = strnstr("Timon", "im", 5);
	printf("%s", a);
}
