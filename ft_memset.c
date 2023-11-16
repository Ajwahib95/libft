/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:37:06 by awahib            #+#    #+#             */
/*   Updated: 2023/11/16 22:28:16 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > 0)
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (str);
}
