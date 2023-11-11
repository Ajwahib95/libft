/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:37:06 by awahib            #+#    #+#             */
/*   Updated: 2023/11/10 19:23:16 by awahib           ###   ########.fr       */
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

// int	main(void)
// {
// 	int	i = 0;
// 	int c = 5;
// 	size_t n = 2;
// 	int arr[10] = {5, 1, 2, 3, 4, 5, 6, 7, 8,256};

// 	while (i < 10)
// 	{
// 		ft_memset(arr+i, c, n);
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// }