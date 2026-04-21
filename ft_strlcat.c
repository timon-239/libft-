/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timonreis <tireis@student.42vienna.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:17:19 by timonreis         #+#    #+#             */
/*   Updated: 2026/04/21 14:25:16 by timonreis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size <= destlen)
		return (size + srclen);
	while (src[i] && size - 1 > (i + destlen))
	{
		dest[i + destlen] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (destlen + srclen);
}
