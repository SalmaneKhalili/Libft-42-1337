/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:09:35 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/13 17:09:36 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}

/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;
	int	ok;

	ok = 1;
	c = -1;
	while (c <= 255)
	{
		if ((ft_isprint(c) != 0) != (isprint(c) != 0))
			ok = 0;
		c++;
	}
	printf("isprint: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
