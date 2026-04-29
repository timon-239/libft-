/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstclear.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/27 13:27:47 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:24:24 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
	*lst = NULL;
}
/*
#include <stdio.h>

void	del_str(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*l = ft_lstnew(ft_strdup("A"));
	ft_lstadd_back(&l, ft_lstnew(ft_strdup("B")));

	ft_lstclear(&l, del_str);
	if (!l)
		printf("clear ok\n");
	return (0);
}*/
