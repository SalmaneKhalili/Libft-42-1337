/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 08:58:14 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 09:13:00 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Function Name ft_putchar_fd
// Prototype void ft_putchar_fd(char c, int fd);
// Files to Submit -
// Parameters c: The character to output.
// fd: The file descriptor on which to write.
// Return Value None
// External Function write
// Description Outputs the character ’c’ to the specified file
// descriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd == -1)
		return ;
	write(fd, &c, 1);
}
