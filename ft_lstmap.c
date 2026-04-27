/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tireis <tireis@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 14:21:07 by tireis            #+#    #+#             */
/*   Updated: 2026/04/27 14:31:26 by tireis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	int		size;
	t_list	*ptr;

	size = ft_lstsize(lst);
	ptr = malloc(sizeof(t_list) * size);
	if (!ptr)
		return (NULL);
	ft_lstiter(lst, f);
}
