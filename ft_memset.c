/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/22 15:59:57 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 13:41:08 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hallo";
	char	c;
	char	*res;

	c = 'a';
	res = ft_memset(str, c, 6);
	printf("%s", res);
}*/
