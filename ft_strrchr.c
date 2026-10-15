/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:21 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/15 16:18:20 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	s_len;

	s_len = ft_strlen(s);
	while (s_len >= 0)
	{
		if (s[s_len] == (unsigned char)c)
			return ((char *)(&s[s_len]));
		s_len--;
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
