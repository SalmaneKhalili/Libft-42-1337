/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:28:54 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/15 08:43:52 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s11;
	const unsigned char	*s22;

	if (!n)
		return (0);
	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	while (n && *s11++ == *s22++)
		n--;
	return (*--s11 - *--s22);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	unsigned char	b[8] = {0, 1, 2, 9, 4, 5, 6, 7};
	size_t			n;
	int				ok;
	int				x;
	int				y;

	ok = 1;
	n = 0;
	while (n <= 8)
	{
		x = ft_memcmp(a, b, n);
		y = memcmp(a, b, n);
		if ((x != 0) != (y != 0))
			ok = 0;
		x = ft_memcmp(a, a, n);
		y = memcmp(a, a, n);
		if ((x != 0) != (y != 0))
			ok = 0;
		n++;
	}
	printf("memcmp: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
