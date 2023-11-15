/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:19:55 by awahib            #+#    #+#             */
/*   Updated: 2023/11/13 03:17:30 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;
	size_t	buffer;

	ptr = NULL;
	if (nitems > 0 && size > 0)
	{
		buffer = nitems * size;
		if (buffer / nitems != size)
			return (NULL);
		ptr = malloc(buffer);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, buffer);
	}
	else if (nitems == 0 || size == 0)
	{
		ptr = malloc(1);
		ptr[0] = 0;
	}
	return ((void *)ptr);
}

// int main()
// {
//     // int i;
//     int *arr = ft_calloc(9223372036854775807,1);
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