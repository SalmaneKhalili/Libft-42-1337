/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:08:25 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/16 17:07:42 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_len;

	if (s == NULL)
		return (NULL);
	sub_len = ft_strlen(s) - start + 1;
	if (ft_strlen(s) <= start)
	{
		sub = malloc(0);
		if (sub == NULL)
			return (NULL);
		sub[0] = '\0';
		return (sub);
	}
	if (len < sub_len)
		sub_len = len + 1;
	sub = malloc(sub_len);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len);
	return (sub);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char	*mine;
	char	*ref;
	size_t	i;
	size_t	j;
	int		ok;
	size_t	n;

	const char	*srcs[] = {"hello world", "", "a", "abc", "0123456789",
			"mkdkpjahr", "l", "jmidvz", "h", "vwnsn", "xdj",
			"yshkhmkonvkdjhhdyw", "bppiopghwzgqgqyu", "dsmrecsccjyb",
			"nxpvfsfjfulkutjit", "utoappsmrrdgotdvni"};
	size_t		starts[] = {0, 6, 10, 100, 3, 0, 6, 17, 10, 4, 12, 11, 16, 8, 3,
				3, 17};
	size_t		lens[] = {11, 5, 1, 50, 10, 0, 1, 22, 16, 20, 28, 21, 12, 6, 3,
				10, 4};
	ok = 1;
	n = sizeof(srcs) / sizeof(srcs[0]);
	i = 0;
	while (i < n)
	{
		mine = ft_substr(srcs[i], starts[i], lens[i]);
		j = starts[i];
		if (j >= strlen(srcs[i]))
			ref = strdup("");
		else if (j + lens[i] > strlen(srcs[i]))
			ref = strdup(srcs[i] + j);
		else
		{
			ref = malloc(lens[i] + 1);
			memcpy(ref, srcs[i] + j, lens[i]);
			ref[lens[i]] = '\0';
		}
		printf("src=%-12s start=%-3zu len=%-3zu | ft: %-12s | ref: %-12s | ",
			srcs[i], starts[i], lens[i], mine ? mine : "(null)",
			ref ? ref : "(null)");
		printf("%s\n", (mine && ref && strcmp(mine,
					ref) == 0) ? "PASS" : "FAIL");
		ok = ok && (mine && ref && strcmp(mine, ref) == 0);
		free(mine);
		free(ref);
		i++;
	}
	printf("substr: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
