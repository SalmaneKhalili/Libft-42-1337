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
