/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:53:34 by awahib            #+#    #+#             */
/*   Updated: 2023/11/12 17:25:15 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*last_occurence;

	i = 0;
	last_occurence = NULL;
	while (str[i])
	{
		if (str[i] == (unsigned char)c)
			last_occurence = &str[i];
		i++;
	}
	if ((unsigned char)c == 0)
		return ((char *)&str[i]);
	return ((char *)last_occurence);
}
