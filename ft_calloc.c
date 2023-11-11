/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:19:55 by awahib            #+#    #+#             */
/*   Updated: 2023/11/11 00:13:36 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	buffer;

	buffer = nitems * size;
	ptr = malloc(buffer);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, buffer);
	return (ptr);
}

// int main()
// {
//     // int i;
//     int *arr = ft_calloc(2,2);
//     printf("%ls", arr);
//     // i = 0;
//     // while (i < 4)
//     // {
//     //     printf("%d", arr[i]);
//     //     i++;
//     // }
//     free(arr);
//     return (0);
// }