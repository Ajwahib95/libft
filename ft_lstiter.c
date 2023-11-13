/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:31:52 by awahib            #+#    #+#             */
/*   Updated: 2023/11/13 09:44:26 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void setnum(void *content)
{
    *(int *)content = 42;
}

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

#include <stdio.h>

int main()
{
    int *data = malloc(sizeof(int));
	int *data1 = malloc(sizeof(int));
	int *data2 = malloc(sizeof(int));

    *data = 1;
	*data1 = 2;
	*data2 = 3;
	
	t_list *lst = ft_lstnew(data);
	lst->next = ft_lstnew(data1);
	lst->next->next = ft_lstnew(data2);
    
    t_list *tmp = lst;
    while (tmp)
    {
        printf("%d", *(int *)tmp->content);
        tmp = tmp->next;
    }
    ft_lstiter(lst, setnum);
    
    tmp = lst;
    while (tmp)
    {
        printf("%d", *(int *)tmp->content);
        tmp = tmp->next;
    }
}