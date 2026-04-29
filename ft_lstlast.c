/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/27 11:38:35 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:30:55 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*l;
	t_list	*last;

	l = ft_lstnew("A");
	l->next = ft_lstnew("B");
	l->next->next = ft_lstnew("C");

	last = ft_lstlast(l);

	if (last)
		printf("last: %s\n", (char *)last->content);
	else
		printf("empty\n");
	return (0);
}*/
