/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:01:16 by awahib            #+#    #+#             */
/*   Updated: 2023/11/13 02:34:46 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		str[i] = NULL;
		i++;
	}
	free(str);
	str = NULL;
	return (str);
}

static int	ft_countwords(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str && str[i])
	{
		while (str[i] && str[i] == sep)
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != sep)
			i++;
	}
	return (count);
}

static int	ft_skip(char const *str, char sep, int start)
{
	while (str[start] && str[start] == sep)
		start++;
	return (start);
}

static char	**ft_wordcpy(char **strs, char const *str, char sep)
{
	int	start;
	int	end;
	int	i;

	i = 0;
	start = 0;
	end = 0;
	while (str && str[start])
	{
		start = ft_skip(str, sep, start);
		end = start;
		while (str[end] && str[end] != sep)
			end++;
		strs[i] = ft_substr(str, start, (end - start));
		if (!strs[i])
			return (ft_free(strs));
		i++;
		start = end;
		start = ft_skip(str, sep, start);
	}
	return ((strs[i] = NULL), strs);
}

char	**ft_split(char const *str, char sep)
{
	char	**strs;

	strs = (char **)malloc(sizeof(char *) * (ft_countwords(str, sep) + 1));
	if (!strs)
		return (NULL);
	if (!str || !ft_countwords(str, sep))
		return ((strs[0] = NULL), strs);
	strs = ft_wordcpy(strs, str, sep);
	return (strs);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char **strings;
// 	strings = ft_split("  tripouille  42  ", ' ');
// 	int i = 0;
// 	// printf("%s", *strings);
// 	while (i < 2)
// 	{
// 		printf("%s", strings[i]);
// 		printf("\n");
// 		i++;
// 	}
// 	ft_free(strings);
// 	return (0);
// }