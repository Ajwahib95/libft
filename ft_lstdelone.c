/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:48:57 by awahib            #+#    #+#             */
/*   Updated: 2023/11/13 11:05:12 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del(void *content)
// {
// 	free(content);
// 	content = NULL;
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
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

// 	t_list *tmp = lst;
// 	// t_list *tmp2;
// 	while(tmp->next->next)
// 	{
// 		tmp = tmp->next;
// 	}
// 	// tmp2 = tmp;
// 	ft_lstdelone(tmp->next, del);
// 	tmp->next = NULL;
	
// 	tmp = lst;
// 	while (tmp)
// 	{
//     	printf("%d", *(int *)tmp->content);
// 		tmp = tmp->next;
//     	// printf("%d", *(int *)lst->next->content);
// 	}
//     // printf("%d", *(int *)lst->next->next->content);
// 	// tmp = lst;
// 	// lst = lst->next;
// 	ft_lstdelone(lst->next, del);
// 	ft_lstdelone(lst, del);
// 	// free(tmp->content);
// 	// tmp->content = NULL;
// 	// free(tmp);
// 	// free(lst->content);
// 	// lst->content = NULL;
// 	// free(lst);
// 	return (0);
// }