/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 08:24:49 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 08:39:18 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name:	ft_strmapi
// Prototype:		char *ft_strmapi(char const *s, char (*f)(unsigned
// int, char));
// Files to Submit:  -
// Parameters:  s: The string to iterate over.
//				f: The function to apply to each character.
// Return Value:  The string created from the successive applications
// of ’f’.
// Returns NULL if the allocation fails.
// External Function:  malloc
// Description:	Applies the function f to each character of the
// string s, passing its index as the first argument
// and the character itself as the second. A new
// string is created (using malloc(3)) to store the
// results from the successive applications of f.

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*new_str;
	char	*head;
	int		i;

	if (f == NULL || s == NULL)
		return (NULL);
	len = ft_strlen(s);
	new_str = malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	head = new_str;
	i = 0;
	while (s[i])
	{
		*new_str++ = (f)(i, s[i]);
		i++;
	}
	*new_str = '\0';
	return (head);
}
