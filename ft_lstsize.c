/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 02:45:52 by awahib            #+#    #+#             */
/*   Updated: 2023/11/13 03:03:31 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while(lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}

#include <stdio.h>

int	main()
{
	int data = 1337;
	int data1 = 43;
	int data2 = 1;

	t_list *head = ft_lstnew(&data);
	head->next = ft_lstnew(&data1);
    
	printf("%s", *(int *)(head->content));
    
	return 0;
}