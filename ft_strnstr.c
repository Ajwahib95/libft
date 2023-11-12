/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:24:54 by awahib            #+#    #+#             */
/*   Updated: 2023/11/11 23:46:06 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *to_search, const char *to_find, size_t len)
{
	size_t	tofind_len;
	size_t	i;
	size_t	j;

	if (!to_find[0])
		return ((char *)to_search);
	tofind_len = ft_strlen(to_find);
	i = 0;
	while (to_search[i] && tofind_len <= len - i)
	{
		j = 0;
		while (to_search[i + j] == to_find[j] && to_find[j])
			j++;
		if (tofind_len == j)
			return ((char *)(to_search + i));
		i++;
	}
	return (NULL);
}
