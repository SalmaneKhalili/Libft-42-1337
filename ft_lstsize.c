/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 11:27:57 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 11:32:52 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstsize
// Prototype unsigned int ft_lstsize(t_list *lst);
// Files to Submit -
// Parameters lst: The beginning of the list.
// Return Value The length of the list
// External Function None
// Description Counts the number of nodes in the list.

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		i;

	current = lst;
	i = 0;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
