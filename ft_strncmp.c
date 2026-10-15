/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:53:47 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/15 14:43:15 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n && *s1 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return ((unsigned char)*--s1 - (unsigned char)*--s2);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	*s1s[] = {"abc", "abc", "abd", "abc", "", "", "abcd", "ab"};
	const char	*s2s[] = {"abc", "abd", "abc", "", "abc", "", "abcd", "abb"};
	size_t		ns[] = {3, 3, 3, 1, 5, 5, 4, 8};
	size_t		i;
	int			mine;
	int			std;

	i = 0;
	while (i < sizeof(s1s) / sizeof(s1s[0]))
	{
		mine = ft_strncmp(s1s[i], s2s[i], ns[i]);
		std = strncmp(s1s[i], s2s[i], ns[i]);
		printf("s1=%-8s s2=%-8s n=%zu | ft_sign: %-2d | std_sign: %-2d | %s\n",
			s1s[i], s2s[i], ns[i],
			(mine > 0) - (mine < 0), (std > 0) - (std < 0),
			((mine > 0) - (mine < 0)) == ((std > 0) - (std < 0))
			? "PASS" : "FAIL");
		i++;
	}
	return (0);
}
*/
