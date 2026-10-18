/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 12:56:13 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 13:11:24 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstlast
// Prototype t_list *ft_lstlast(t_list *lst);
// Files to Submit -
// Parameters lst: The beginning of the list.
// Return Value Last node of the list
// External Function None
// Description Returns the last node of the list.

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while ((*lst).next)
	{
		lst = (*lst).next;
	}
	return (lst);
}
