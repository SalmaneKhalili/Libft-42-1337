/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:09:50 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/13 17:11:47 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	const char	*c;

	c = s;
	while (*c)
		c++;
	return (c - s);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*tests[] = {"", "a", "hello", "hello world"};
	size_t		n;
	size_t		i;
	int			ok;

	n = sizeof(tests) / sizeof(tests[0]);
	ok = 1;
	i = 0;
	while (i < n)
	{
		if (ft_strlen(tests[i]) != strlen(tests[i]))
			ok = 0;
		i++;
	}
	printf("strlen: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
