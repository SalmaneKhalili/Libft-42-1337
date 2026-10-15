/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:09:01 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/13 17:09:03 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	unsigned char	a[16];
	unsigned char	b[16];
	size_t			n;
	int				ok;

	ok = 1;
	n = 0;
	while (n <= 16)
	{
		memset(a, 'x', 16);
		memset(b, 'x', 16);
		ft_bzero(a, n);
		bzero(b, n);
		if (memcmp(a, b, 16) != 0)
			ok = 0;
		n++;
	}
	printf("bzero: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
