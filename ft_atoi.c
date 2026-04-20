/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timonreis <tireis@student.42vienna.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 18:35:25 by timonreis         #+#    #+#             */
/*   Updated: 2026/04/20 18:55:41 by timonreis        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	isspace(char c)
{
	if (c == '\f' || c == '\t' || c == '\n' || c == '\v' || c == '\r'
		|| c == ' ')
		return (1);
	return (0);
}
int	ft_atoi(const char *str)
{
	int	sign;
	int	res;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	while (isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
