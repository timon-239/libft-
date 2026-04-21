/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timonreis <tireis@student.42vienna.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:32:58 by timonreis         #+#    #+#             */
/*   Updated: 2026/04/21 14:34:44 by timonreis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < n - 1 && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsinged char)s2[i]);
}
