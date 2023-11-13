/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awahib <awahib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 05:45:25 by awahib            #+#    #+#             */
/*   Updated: 2023/11/13 11:25:27 by awahib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    // t_list *tmp;

    // tmp = ft_lstlast(*lst);
    // tmp->next = new;
    if (*lst)
		ft_lstlast(*lst)->next = new;
	else
		*lst = new;

}