/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:19:55 by awahib            #+#    #+#             */
/*   Updated: 2023/11/17 18:15:47 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*ptr;
	size_t	buffer;

	ptr = NULL;
	buffer = nitems * size;
	if (nitems && buffer / nitems != size)
		return (NULL);
	ptr = malloc(buffer);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, buffer);
	return (ptr);
}
