/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:06:17 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 09:12:15 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function Name: ft_putstr_fd
// Prototype:		void ft_putstr_fd(char *s, int fd);
// Files to Submit -
// Parameters:	s:  The string to output.
//				fd: The file descriptor on which to write.
// Return Value: None
// External Function: write
// Description Outputs the string ’s’ to the specified file
// descriptor.

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL || fd == -1)
		return ;
	while (*s)
		write(fd, s++, 1);
	return ;
}
