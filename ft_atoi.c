/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:12:00 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/15 10:26:13 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	value;
	int	sign;

	value = 0;
	sign = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		value = value * 10 + (*str - '0');
		str++;
	}
	return (value * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t	n;
	size_t	i;
	int		same;
		int	mine;
		int	std;

	const char	*tests[] = {
		"",
		"0",
		"42",
		"-42",
		"  42",
		"\t\n42",
		"42abc",
		"+42",
		"-0",
		"00042",
		"2147483647",
		"2147483648",
		"-2147483648",
		"-2147483649",
		"999999999999999999999",
		"++42",
		"+-42",
		"--42",
		"   +42"
	};
	n = sizeof(tests) / sizeof(tests[0]);
	same = 1;
	i = 0;
	while (i < n)
	{
		mine = ft_atoi(tests[i]);
		std = atoi(tests[i]);
		printf("input %-28s | ft_atoi: %-11d | atoi: %-11d | %s\n",
			tests[i], mine, std,
			mine == std ? "PASS" : "FAIL (mismatch / UB)");
		if (mine != std)
			same = 0;
		i++;
	}
	printf("ALL INPUTS: %s\n", same ? "PASS" : "FAIL");
	return (0);
}
*/
