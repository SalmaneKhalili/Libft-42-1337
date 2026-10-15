/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:02:27 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/14 16:36:47 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
		if (*ptr++ == (unsigned char)c)
			return ((void *)--ptr);
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s;
	int			c;
	size_t		n;
	int			ok;

	s = "hello world";
	ok = 1;
	c = 0;
	while (c <= 255)
	{
		n = 0;
		while (n <= 12)
		{
			if (ft_memchr(s, c, n) != memchr(s, c, n))
				ok = 0;
			n++;
		}
		c++;
	}
	printf("memchr: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
