/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 18:45:32 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 18:47:31 by salkhali         ###   ########.fr       */
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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *))
{
}
