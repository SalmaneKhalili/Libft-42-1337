/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:45:54 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/17 18:10:22 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Function Name:  ft_split
// Prototype:		char **ft_split(char const *s, char c);
// Files to Submit:  -
// Parameters:		s: The string to be split.
// 				c: The delimiter character.
// Return Value:   The array of new strings resulting from the split.
// 				NULL if any allocation fails.
// 				The returned structure will be released using:
// 				1) free() on each string in the array;
// 				2) free() the array itself.
// External Function:  malloc, free
// Description:	Allocates memory (using malloc(3))
// and returns an array of strings obtained by splitting ’s’
// using the character ’c’ as a delimiter.
// Each string in the returned array is allocated independently.
// The array of pointers itself is also allocated dynamically.
// The returned array must be NULL terminated.
//
#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**free_arr(char **words, int elems)
{
	int	i;

	i = 0;
	while (i < elems)
		free(words[i++]);
	free(words);
	return (NULL);
}

static char	**ft_allocate(char c, char const *s)
{
	char	**words;
	size_t	count;

	count = ft_count_words(s, c);
	words = malloc((count + 1) * sizeof(char *));
	if (words != NULL)
		words[count] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char		**words;
	char const	*head;
	char		**start;

	if (s == NULL)
		return (NULL);
	words = ft_allocate(c, s);
	if (words == NULL)
		return (NULL);
	start = words;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			head = s;
			while (*s && *s != c)
				s++;
			*words++ = ft_substr(head, 0, s - head);
			if (*(words - 1) == NULL)
				return (free_arr(start, (words - start) - 1));
		}
	}
	return (start);
}
