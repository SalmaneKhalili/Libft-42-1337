/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:19:10 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 13:34:34 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned const char	*head;
	unsigned char		*current;

	if (n == 0 || s1 == s2)
		return (s1);
	head = (unsigned const char *)s2;
	current = (unsigned char *)s1;
	if (current > head)
	{
		while (n--)
			current[n] = head[n];
	}
	else
	{
		ft_memcpy(s1, s2, n);
	}
	return (s1);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	a[16];
	unsigned char	b[16];
	size_t			n;
	size_t			off;
	int				ok;

	ok = 1;
	n = 0;
	while (n <= 8)
	{
		off = 0;
		while (off <= 8)
		{
			memcpy(a, "abcdefghijklmnop", 16);
			memcpy(b, "abcdefghijklmnop", 16);
			if (ft_memmove(a + off, a, n) != a + off
				|| memmove(b + off, b, n) != b + off
				|| memcmp(a, b, 16) != 0)
				ok = 0;
			memcpy(a, "abcdefghijklmnop", 16);
			memcpy(b, "abcdefghijklmnop", 16);
			if (ft_memmove(a, a + off, n) != a
				|| memmove(b, b + off, n) != b
				|| memcmp(a, b, 16) != 0)
				ok = 0;
			off++;
		}
		n++;
	}
	printf("memmove: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
