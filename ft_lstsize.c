/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstsize.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/27 11:32:20 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:35:27 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
#include <stdio.>

int	main(void)
{
	t_list	*l = ft_lstnew("1");
	l->next = ft_lstnew("2");
	l->next->next = ft_lstnew("3");

	printf("size: %d\n", ft_lstsize(l)); // Erwartet: 3
	return (0);
}*/
