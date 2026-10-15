/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:49:20 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/15 09:09:17 by salkhali         ###   ########.fr       */
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
		if (ft_strncmp(big++, little, little_len) == 0)
			return ((char *)(--big));
	}
	return (0);
}
