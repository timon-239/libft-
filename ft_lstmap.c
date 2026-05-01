/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/27 14:21:07 by tireis           #+#    #+#              */
/*   Updated: 2026/05/01 19:46:19 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*n_node;
	void	*n_content;

	if (!lst || !f || !del)
		return (NULL);
	n_lst = NULL;
	while (lst)
	{
		n_content = f(lst->content);
		if (!n_content)
			return (ft_lstclear(&n_lst, del), NULL);
		n_node = ft_lstnew(n_content);
		if (!n_node)
		{
			del(n_content);
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, n_node);
		lst = lst->next;
	}
	return (n_lst);
}
