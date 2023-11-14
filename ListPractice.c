#include "libft.h"


void	del(void *content)
{
	free(content);
	content = NULL;
}

void	lst_toupper(void *content)
{
	int i = 0;

	char *new_content = (char *)content;
	while (new_content[i])
	{
		new_content[i] = new_content[i] - 32;
		i++;
	}
}

///// ------ Deleting the node from n'th position --------

// void	*setnum(void *content)
// {
// 	int	*new_content;

// 	new_content = malloc(sizeof(int));
// 	if (new_content)
// 	{
// 		*new_content = *(int *)content + 42;
// 	}
// 	return (new_content);
// }

// int	main(void)
// {
// 	int i = 0;

// 	int *data;
// 	t_list *head = NULL;
// 	t_list *new;

// Allocate memory for content and passing it to lstnew to creat new nodes
// while (i < 10)
// {
// 	data = malloc(sizeof(int));
// 	*data = i;
// 	new = ft_lstnew(data);
// 	ft_lstadd_back(&head, new);
// 	i++;
// }

// iterate through the list to get to the position of the node to be relinked
// t_list *tmp = head;
// while (*(int *)tmp->content < 5)
// 	tmp = tmp->next;

// Create a tmp to store the position of the node that i want to delete
// t_list *tmp1 = tmp->next;

// tmp->next = tmp->next->next;

// Delete the node
// ft_lstdelone(tmp1, del);

// new tmp to iterate through the list to be printed
// t_list *tmp_print = head;
// while (tmp_print)
// {
//     printf("%d", *(int *)tmp_print->content);
//     printf("\n");
//     tmp_print = tmp_print->next;
// }

// free
// ft_lstclear(&head, del);
// return (0);
// }

/////// --- modifying the content and Deleting node from the start of the list ----- /////



#include <stdio.h>

int	main(void)
{
	t_list *head = NULL;

	t_list *new = ft_lstnew(ft_strdup("wahib"));
	ft_lstadd_back(&head, new);
	new = ft_lstnew(ft_strdup("abd"));
	ft_lstadd_back(&head, new);
	new = ft_lstnew(ft_strdup("eljalil"));
	ft_lstadd_back(&head, new);
	
	ft_lstiter(head, lst_toupper);

	t_list *tmp = head;	
	head = head->next;

	ft_lstdelone(tmp, del);

	t_list *tmp_print = head;
	while(tmp_print)
	{
		printf("%s\n", (char *)tmp_print->content);
		tmp_print = tmp_print->next;
	}

	ft_lstclear(&head, del);
}