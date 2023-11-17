/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:19:55 by awahib            #+#    #+#             */
/*   Updated: 2023/11/16 22:26:40 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*ptr;
	size_t	buffer;

	ptr = NULL;
	if (nitems == 0 || size == 0)
		return (NULL);
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
	return ((void *)ptr);
}
