/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:36:12 by awahib            #+#    #+#             */
/*   Updated: 2023/11/12 23:07:34 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	while (s[start] && i < len)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>
// #include <malloc.h>
// int main()
// {
//     char str[] = "4x4p[owkefpokwefx20";
//     unsigned int start = 20;
//     size_t len = 3;

//     char *new = ft_substr(NULL, 2, 42000);
//     if (new != NULL && new[0] == '\0') {
//     // The function returned an empty string
//     printf("The function returned an empty string\n");
//     } else if (new != NULL) {
//     // The function returned a non-empty string
//     printf("%s\n", new);
//     printf("The function allocated: \"%ld\"\n", malloc_usable_size(new));

//     // Don't forget to free the memory when you're done with it
//     } else {
//     // The function returned NULL
//     printf("The function returned NULL\n");
//     printf("\n");
//     }
//     free(new);
//     return (0);
// }