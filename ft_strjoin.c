/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 14:58:01 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/17 15:15:29 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function Name:  ft_strjoin
Prototype:   char *ft_strjoin(char const *s1, char const *s2);
Files to Submit -
Parameters:			s1: The prefix string.
					s2: The suffix string.
Return Value:		The new string.
					NULL if the allocation fails.
External Function	malloc
Description:		Allocates memory (using malloc(3)) and returns a
new string, which is the result of concatenating ’s1’ and ’s2’.
*/
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	new_len;
	char	*new_str;
	char	*head;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(new_len + 1);
	head = new_str;
	if (new_str == NULL)
		return (NULL);
	ft_memcpy(new_str, s1, ft_strlen(s1));
	new_str += ft_strlen(s1);
	ft_strlcpy(new_str, s2, ft_strlen(s2) + 1);
	return (head);
}
