/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:14:18 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/20 16:13:03 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstadd_back
// Prototype void ft_lstadd_back(t_list **lst, t_list *new);
// Files to Submit -
// Parameters lst: The address of a pointer to the first node of
// a list.
// new: The address of a pointer to the node to be
// added.
// Return Value None
// External Function None
// Description Adds the node ’new’ at the end of the list.

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	(*node).next = new;
}
