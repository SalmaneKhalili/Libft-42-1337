/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:35:42 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/15 15:00:22 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	total_size;
	char	*arr;

	if (elsize != 0 && nelem > (size_t)-1 / elsize)
		return (NULL);
	else
		total_size = elsize * nelem;
	arr = malloc(total_size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, total_size);
	return (arr);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	size_t			count;
	size_t			size;
	unsigned char	*p;
	size_t			i;
	int				ok;

	ok = 1;
	count = 0;
	while (count <= 8)
	{
		size = 0;
		while (size <= 8)
		{
			p = ft_calloc(count, size);
			if (count == 0 || size == 0)
				free(p);
			else if (p == NULL)
				ok = 0;
			else
			{
				i = 0;
				while (i < count * size)
				{
					if (p[i] != 0)
						ok = 0;
					i++;
				}
				free(p);
			}
			size++;
		}
		count++;
	}
	printf("calloc: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
