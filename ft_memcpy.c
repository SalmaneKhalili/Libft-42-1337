/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:33:22 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/14 09:07:20 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	const unsigned char	*head;
	unsigned char		*current;

	head = s2;
	current = s1;
	while (n--)
		*current++ = *head++;
	return (s1);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	src[16];
	unsigned char	a[16];
	unsigned char	b[16];
	size_t			n;
	int				ok;

	ok = 1;
	n = 0;
	while (n <= 16)
	{
		memset(src, 'y', 16);
		memset(a, 'x', 16);
		memset(b, 'x', 16);
		if (ft_memcpy(a, src, n) != a || memcpy(b, src, n) != b
			|| memcmp(a, b, 16) != 0)
			ok = 0;
		n++;
	}
	printf("memcpy: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
