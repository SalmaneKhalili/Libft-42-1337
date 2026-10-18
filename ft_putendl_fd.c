/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:15:15 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 09:18:43 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function Name ft_putendl_fd
// Prototype void ft_putendl_fd(char *s, int fd);
// Files to Submit -
// Parameters s: The string to output.
// fd: The file descriptor on which to write.
// Return Value None
// External Function write
// Description Outputs the string ’s’ to the specified file
// descriptor followed by a newline.

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL || fd == -1)
		return ;
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}
