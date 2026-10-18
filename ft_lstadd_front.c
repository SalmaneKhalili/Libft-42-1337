/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:20:20 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 11:26:22 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstadd_front
// Prototype void ft_lstadd_front(t_list **lst, t_list *new);
// Files to Submit -
// Parameters lst: The address of a pointer to the first node of
// a list.
// new: The address of a pointer to the node to be
// added.
// Return Value None
// External Function None
// Description Adds the node ’new’ at the beginning of the list.

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
