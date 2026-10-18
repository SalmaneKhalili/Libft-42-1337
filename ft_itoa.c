/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:17:59 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 08:23:36 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name:	ft_itoa
// Prototype:		char *ft_itoa(int n);
// Files to Submit:  -
// Parameters:		n: The integer to convert.
// Return Value:	The string representing the integer.
//					NULL if the allocation fails.
// External Function:  malloc
// Description:		Allocates memory (using malloc(3)) and returns
// a string representing the integer received as an
// argument. Negative numbers must be handled.

#include "libft.h"

static size_t	ft_len(long n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*ft_handle_zero(void)
{
	char	*str;

	str = malloc(2);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	count;
	char	*str;

	nb = n;
	if (n == 0)
		return (ft_handle_zero());
	count = ft_len(nb) + 1;
	str = malloc(count);
	if (str == NULL)
		return (NULL);
	count--;
	str[count--] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		str[count--] = nb % 10 + '0';
		nb /= 10;
	}
	return (str);
}
