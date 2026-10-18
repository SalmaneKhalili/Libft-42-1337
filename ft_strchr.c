/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:11:21 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/17 16:13:46 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s++ == (unsigned char)c)
			return ((char *)(--s));
	}
	if (c == '\0')
		return ((char *)s);
	return ((void *)0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s;
	int			c;
	int			ok;

	s = "hello world";
	ok = 1;
	c = 0;
	while (c <= 255)
	{
		if (ft_strchr(s, c) != strchr(s, c))
			ok = 0;
		c++;
	}
	printf("strchr: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
