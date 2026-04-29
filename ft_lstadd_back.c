/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/27 11:42:19 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:16:23 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*#include <stdio.h>
int	main(void)
{
	t_list	*l = NULL;
	t_list	*n1 = ft_lstnew("A");
	t_list	*n2 = ft_lstnew("B");
	t_list	*t;

	ft_lstadd_back(&l, n1);
	ft_lstadd_back(&l, n2);
	t = l;
	while (t)
	{
		printf("%s\n", (char *)t->content);
		t = t->next;
	}
	return (0);
}*/
