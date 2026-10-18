/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:41:58 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 09:55:15 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_lstnew
// Prototype t_list *ft_lstnew(void *content);
// Files to Submit -
// Parameters content: The content to store in the new node.
// Return Value A pointer to the new node
// External Function malloc
// Description Allocates memory (using malloc(3)) and returns
// a new node. The ’content’ member variable is
// initialized with the given parameter ’content’.
// The variable ’next’ is initialized to NULL.

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
