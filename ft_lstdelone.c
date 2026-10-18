/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 13:47:19 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 13:54:44 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstdelone
// Prototype void ft_lstdelone(t_list *lst, void (*del)(void
// *));
// Files to Submit -
// Parameters lst: The node to free.
// del: The address of the function used to delete
// the content.
// Return Value None
// External Function free
// Description Takes a node as parameter and frees its content
// using the function ’del’. Free the node itself but
// does NOT free the next node.

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del((*lst).content);
	free(lst);
}
