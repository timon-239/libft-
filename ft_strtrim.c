/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tireis <tireis@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:11:33 by tireis            #+#    #+#             */
/*   Updated: 2026/04/22 14:11:34 by tireis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char *ptr;
	size_t s1_len;
	size_t set_len;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	ptr = malloc(sizeof(char) * (s1_len - set_len) + 1);
	if (!ptr)
		return (NULL);
	int cmp = ft_memcmp(s1, set, s1_len + 1);
	if (cmp == 0)
	{
		ptr[cmp] = ft_memcpy(ptr, s1, s1_len - set_len - 1);
	}
#include <stdio.h>

	int main()
	{
		char *a = ft_strtrim("Hal,lo", ",");
		printf("%s", a);
	}
