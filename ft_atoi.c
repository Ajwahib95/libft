/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 03:43:47 by awahib            #+#    #+#             */
/*   Updated: 2023/11/10 00:38:16 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_convert(const char *str, size_t number, size_t i, int msign)
{
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - 48;
		i++;
		if (number > 9223372036854775807)
		{
			if (msign == -1)
				return (0);
			return (-1);
		}
	}
	return (number);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	int		msign;
	size_t	number;

	i = 0;
	msign = 1;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			msign *= -1;
		i++;
	}
	number = ft_convert(str, number, i, msign);
	return (number * msign);
}
