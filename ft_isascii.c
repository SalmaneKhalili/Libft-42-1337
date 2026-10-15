/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:09:21 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/13 17:09:23 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
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
		if ((ft_isascii(c) != 0) != (isascii(c) != 0))
			ok = 0;
		c++;
	}
	printf("isascii: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
