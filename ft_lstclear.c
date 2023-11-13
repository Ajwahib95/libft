/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:04:12 by awahib            #+#    #+#             */
/*   Updated: 2023/11/13 11:05:29 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// 	content = NULL;
// }

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	if (lst && del)
// 	{
// 		del(lst->content);
// 		free(lst);
// 	}
// }

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    
    while (*lst)
    {
        tmp = *lst;
        *lst = (*lst)->next;
        ft_lstdelone(tmp, del);
    }
    lst = NULL;
}
// #include <stdio.h>

// int	main(void)
// {
// 	int *data = malloc(sizeof(int));
// 	int *data1 = malloc(sizeof(int));
// 	int *data2 = malloc(sizeof(int));

//     *data = 1;
// 	*data1 = 2;
// 	*data2 = 3;
	
// 	t_list *lst = ft_lstnew(data);
// 	lst->next = ft_lstnew(data1);
// 	lst->next->next = ft_lstnew(data2);

//     ft_lstclear(&lst, del);
//     printf("%s", (char *)lst);
// 	return (0);
// }