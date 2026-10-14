/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:02:03 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/13 17:02:05 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*head;

	head = s;
	while (n--)
		*head++ = (unsigned char)c;
	return (s);
}

/*
int	main(void)
{
	int				x;
	int				j;
	unsigned char	*f;

	x = -13037;
	f = (unsigned char *)&j;
	while (f < (unsigned char *)&j + 4)
		ft_memset(f++, *((unsigned char *)&x + (f - (unsigned char *)&j)), 1);
	printf("Val = %d", j);
}
*/
