/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:49:20 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/15 12:52:13 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (!(*little))
		return ((char *)big);
	if (len < little_len)
		return (0);
	while (len-- && *big)
	{
		if (len + 1 < little_len)
			return (0);
		if (ft_strncmp(big++, little, little_len) == 0)
			return ((char *)(--big));
	}
	return (0);
}

/*
#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	const char	*bigs[] = {"abc", "abcd", "hello world", "aaab", "abcd", ""};
	const char	*littles[] = {"bc", "cd", "world", "ab", "cd", "x"};
	size_t		lens[] = {3, 3, 11, 3, 4, 1};
	size_t		i;
	char		*mine;
	char		*std;

	i = 0;
	while (i < sizeof(bigs) / sizeof(bigs[0]))
	{
		mine = ft_strnstr(bigs[i], littles[i], lens[i]);
		std = strnstr(bigs[i], littles[i], lens[i]);
		printf("big=%-12s little=%-6s len=%zu | ft=%-6s std=%-6s | %s\n",
			bigs[i], littles[i], lens[i], mine ? mine : "(null)",
			std ? std : "(null)", mine == std ? "PASS" : "FAIL");
		i++;
	}
	return (0);
}
*/
