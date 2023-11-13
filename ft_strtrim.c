/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:23:39 by awahib            #+#    #+#             */
/*   Updated: 2023/11/12 03:47:49 by awahib           ###   ########.fr       */
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

// int main()
// {
//     char str[] = "./wah//.";
//     char set[] = ".f/";
//     char *new = ft_strtrim(NULL, set);
//     if (new != NULL && new[0] == '\0') {
//     // The function returned an empty string
//     printf("The function returned an empty string\n");
//     } else if (new != NULL) {
//     // The function returned a non-empty string
//     printf("The function returned: \"%s\"\n", new);
//     // Don't forget to free the memory when you're done with it
//     } else {
//     // The function returned NULL
//     printf("The function returned NULL\n");
//     printf("\n");
//     }
//     free(new);
//     return (0);
// }