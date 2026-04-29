/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstmap.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/27 14:21:07 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:38:47 by tireis          ###   ########.fr        */
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

/*#include <stdio.h>
void	*f_plus_ten(void *content)
{
	int	*new_val;

	new_val = malloc(sizeof(int));
	if (!new_val)
		return (NULL);
	*new_val = (*(int *)content) + 10;
	return (new_val);
}

void	f_del(void *content)
{
	free(content);
}

int	main(void)
{
	int	val = 5;
	t_list	*lst = ft_lstnew(&val);
	t_list	*new_lst;

	new_lst = ft_lstmap(lst, f_plus_ten, f_del);

	if (new_lst)
	{
		printf("Og: %d\n", *(int *)lst->content);    // 5
		printf("Map: %d\n", *(int *)new_lst->content); // 15
	}

	ft_lstclear(&new_lst, f_del);
	free(lst);
	return (0);
}*/
