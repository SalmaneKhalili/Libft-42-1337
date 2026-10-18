/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:39:51 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 18:44:07 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstiter
// Prototype void ft_lstiter(t_list *lst, void (*f)(void *));
// Files to Submit -
// Parameters lst: The address of a pointer to a node.
// f: The address of the function to apply to each
// node’s content.
// Return Value None
// External Function None
// Description Iterates through the list ’lst’ and applies the
// function ’f’ to the content of each node.

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f((*lst).content);
		lst = (*lst).next;
	}
}
