/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tireis <tireis@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:13:16 by tireis            #+#    #+#             */
/*   Updated: 2026/04/23 13:40:09 by tireis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	numbers(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int n)
{
	char	*ptr;
	int		len;

	len = numbers(n);
	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
		ptr[0] = '-';
	while (n != 0)
	{
		if (n < 0)
			ptr[--len] = '0' - (n % 10);
		else
			ptr[--len] = '0' + (n % 10);
		n = n / 10;
	}
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	int		nb;
	char	*s;

	nb = 100;
	s = ft_itoa(nb);
	printf("Der int %d wird zu dem string %s", nb, s);
}*/
