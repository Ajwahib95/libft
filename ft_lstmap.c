/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:45:35 by awahib            #+#    #+#             */
/*   Updated: 2023/11/13 12:40:31 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void *setnum(void *content)
{
    int *new_content = malloc(sizeof(int));
    if (new_content)
    {
        *new_content = *(int *)content + 42;
    }
    return new_content;
}

void	del(void *content)
{
	free(content);
	content = NULL;
}

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *tmp;
    t_list *new_lst;
    
    new_lst = NULL;
    while (lst)
    {
        tmp = ft_lstnew(f(lst->content));
        if (!tmp)
        {
            ft_lstclear(&new_lst, del);
            return NULL;
        }
        ft_lstadd_back(&new_lst, tmp);
        lst = lst->next;
    }
    return new_lst;
}


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
    
    t_list *new_lst = ft_lstmap(lst, setnum, del);
    t_list *tmp = new_lst;
    while (tmp)
    {
        printf("%d", *(int *)tmp->content);
        printf("\n");
        tmp = tmp->next;
    }
    ft_lstclear(&new_lst, del);
    ft_lstclear(&lst, del);
}