/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstnew.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: tireis <tireis@student.42vienna.com>      #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/04/26 21:58:33 by tireis           #+#    #+#              */
/*   Updated: 2026/04/29 14:34:48 by tireis          ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*node;
	char	*str = "Hello 42";

	node = ft_lstnew(str);
	if (node)
	{
		printf("content: %s\n", (char *)node->content);
		printf("next:    %p\n", node->next); // Muss NULL sein
		free(node);
	}
	return (0);
}*/
