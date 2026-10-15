/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:08:25 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/15 15:31:36 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*head;
	char		*sub;

	head = s + len;
	sub = malloc(len * sizeof(char) + 1);
	ft_strlcpy(sub, head, len + 1);
	return (sub);
}
