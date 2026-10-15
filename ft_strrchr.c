/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:21 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/14 15:48:45 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	s += s_len;
	if (*s == (unsigned char)c)
		return ((char *)(s));
	while (s_len--)
	{
		if (*s-- == (unsigned char)c)
			return ((char *)(s++));
	}
	return (0);
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
		if (ft_strrchr(s, c) != strrchr(s, c))
			ok = 0;
		c++;
	}
	printf("strrchr: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
