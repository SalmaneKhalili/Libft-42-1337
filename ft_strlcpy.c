/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 08:46:00 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/14 09:51:27 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (size-- > 1 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (len);
}
/*
int	main(void)
{
	char	*test;
	char	arr[3];

	test = "literal";
	ft_strlcpy(arr, test, 3);
	printf("test == %s, arr == %s, result = %s \n", test, arr, ((strcmp(test,
					arr) == 0) ? "True" : "False"));
}
*/

/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char			dst1[16];
	char			dst2[16];
	const char		*src;
	size_t			n;
	int				ok;

	src = "hello world";
	ok = 1;
	n = 0;
	while (n <= 16)
	{
		memset(dst1, 'x', 16);
		memset(dst2, 'x', 16);
		if (ft_strlcpy(dst1, src, n) != strlcpy(dst2, src, n))
			ok = 0;
		if (memcmp(dst1, dst2, 16) != 0)
			ok = 0;
		n++;
	}
	printf("strlcpy: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
