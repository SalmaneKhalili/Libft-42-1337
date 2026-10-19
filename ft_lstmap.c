/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:45:32 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/19 08:54:03 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstmap
// Prototype t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
// void (*del)(void *));
// Files to Submit -
// Parameters	lst: The address of a pointer to a node.
//				f: The address of the function applied to each node’s content.
//				del: The address of the function used to delete a node’s content if needed.
// Return Value The new list.
//				NULL if the allocation fails.
// External Function:  malloc, free
// Description:
// Iterates through the list ’lst’, applies the
// function ’f’ to each node’s content, and creates
// a new list resulting of the successive applications
// of the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	t_list	*head;

	new_list = NULL;
	head = NULL;
	while (lst)
	{
		node = malloc(sizeof(t_list));
		if (node == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		(*node).content = f((*lst).content);
		(*node).next = NULL;
		if (new_list == NULL)
		{
			new_list = node;
			head = new_list;
			lst = (*lst).next;
			continue ;
		}
		(*new_list).next = node;
		new_list = (*new_list).next;
		lst = (*lst).next;
	}
	return (head);
}
