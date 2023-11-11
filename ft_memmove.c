/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:53:47 by awahib            #+#    #+#             */
/*   Updated: 2023/11/11 03:38:57 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!*s)
		return (NULL);
	if (dest == src)
		return (dest);
	if (src < dest)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

#include <unistd.h>
int main()
{
    char    src[] = "lorem ipsum dolor sit amet";
    char    *dest;

    dest = src + 1;
    if (src != ft_memmove(src, dest, 8))
            write(1, "dest's adress was not returned\n", 31);
    write(1, dest, 22);
    return 0;
}