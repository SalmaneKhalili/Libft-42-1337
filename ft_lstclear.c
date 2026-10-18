/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:23:34 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 18:36:35 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstclear
// Prototype void ft_lstclear(t_list **lst, void (*del)(void
// *));
// Files to Submit -
// Parameters lst: The address of a pointer to a node.
// del: The address of the function used to delete
// the content of the node.
// Return Value None
// External Function free
// Description Deletes and frees the given node and all its
// successors, using the function ’del’ and free(3).
// Finally, set the pointer to the list to NULL.

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		temp = (*current).next;
		ft_lstdelone(current, del);
		current = temp;
	}
	*lst = NULL;
}
