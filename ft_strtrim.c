/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:23:39 by awahib            #+#    #+#             */
/*   Updated: 2023/11/16 22:28:52 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	if (!s1)
		return (NULL);
	if (*s1 == '\0')
	{
		newstr = ft_substr(s1, 0, 0);
		return (newstr);
	}
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	len = (end - start + 1);
	if (start > end)
		newstr = ft_substr(s1, 0, 0);
	else
		newstr = ft_substr(s1, start, len);
	return (newstr);
}
