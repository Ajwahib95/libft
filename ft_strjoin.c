/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:03:20 by awahib            #+#    #+#             */
/*   Updated: 2023/11/16 22:28:30 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	tlen;

	if (!s1 && !s2)
		return (NULL);
	i = 0;
	j = 0;
	tlen = ft_strlen(s1) + ft_strlen(s2);
	newstr = malloc(sizeof(char) * (tlen + 1));
	if (!newstr)
		return (NULL);
	while (s1[i])
		newstr[j++] = s1[i++];
	i = 0;
	while (s2[i])
		newstr[j++] = s2[i++];
	return ((newstr[j] = '\0'), newstr);
}
