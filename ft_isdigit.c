/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:41:49 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/13 09:41:49 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
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
		if ((ft_isdigit(c) != 0) != (isdigit(c) != 0))
			ok = 0;
		c++;
	}
	printf("isdigit: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
