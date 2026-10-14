/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:21 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/14 15:48:45 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	s += s_len;
	if (*s == (unsigned char)c)
		return ((char *)(s));
	while (s_len--)
	{
		if (*s-- == (unsigned char)c)
			return ((char *)(s++));
	}
	return (0);
}
