/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:02:03 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/14 09:26:38 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*head;

	head = s;
	while (n--)
		*head++ = (unsigned char)c;
	return (s);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	a[16];
	unsigned char	b[16];
	int				c;
	size_t			n;
	int				ok;

	ok = 1;
	c = 0;
	while (c < 256)
	{
		n = 0;
		while (n <= 16)
		{
			memset(a, 'x', 16);
			memset(b, 'x', 16);
			if (ft_memset(a, c, n) != a || memset(b, c, n) != b
				|| memcmp(a, b, 16) != 0)
				ok = 0;
			n++;
		}
		c++;
	}
	printf("memset: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
