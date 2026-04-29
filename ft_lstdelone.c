/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstdelone.c                                    :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/27 12:09:54 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:25:48 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void	f_del(void *c) { free(c); }

int	main(void)
{
	t_list	*n = ft_lstnew(strdup("42"));

	ft_lstdelone(n, f_del);
	printf("del ok\n");
	return (0);
}*/
