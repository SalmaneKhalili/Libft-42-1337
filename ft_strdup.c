/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:30:49 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/15 10:35:09 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*dup;

	s_len = ft_strlen(s);
	dup = malloc(s_len * sizeof(char) + 1);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, s, s_len + 1);
	return (dup);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	const char	*tests[] = {"", "a", "hello world"};
	char		*mine;
	char		*std;
	size_t		n;
	size_t		i;
	int			ok;

	n = sizeof(tests) / sizeof(tests[0]);
	ok = 1;
	i = 0;
	while (i < n)
	{
		mine = ft_strdup(tests[i]);
		std = strdup(tests[i]);
		if (mine == NULL || std == NULL || strcmp(mine, std) != 0)
			ok = 0;
		free(mine);
		free(std);
		i++;
	}
	printf("strdup: %s\n", ok ? "PASS" : "FAIL");
	return (0);
}
*/
