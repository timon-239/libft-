/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timonreis <tireis@student.42vienna.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:18:38 by timonreis         #+#    #+#             */
/*   Updated: 2026/04/20 19:18:40 by timonreis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	if (size == 0)
		return (len);
	while (src[len])
		len++;
	while (src[i] && i < (size - 1))
	{
		dest[i] == src[i];
		i++;
	}
	dest[i] = '\0';
	return (size - 1);
}
