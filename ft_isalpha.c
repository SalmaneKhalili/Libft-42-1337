/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:41:49 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/13 09:41:49 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
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
		if ((ft_isalpha(c) != 0) != (isalpha(c) != 0))
			ok = 0;
		c++;
	}
	printf("isalpha: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
