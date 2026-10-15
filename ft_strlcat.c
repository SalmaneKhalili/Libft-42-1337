/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:54:49 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/14 15:01:20 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char const *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (!size)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (size <= dst_len)
		return (src_len + size);
	while (i < size - dst_len - 1 && *src)
		dst[dst_len + i++] = *src++;
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	char		dst1[32];
	char		dst2[32];
	const char	*src;
	const char	*init;
	size_t		n;
	int			ok;

	src = "world";
	init = "hello";
	ok = 1;
	n = 0;
	while (n <= 32)
	{
		strncpy(dst1, init, 32);
		strncpy(dst2, init, 32);
		if (ft_strlcat(dst1, src, n) != strlcat(dst2, src, n))
			ok = 0;
		if (memcmp(dst1, dst2, 32) != 0)
			ok = 0;
		n++;
	}
	printf("strlcat: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
