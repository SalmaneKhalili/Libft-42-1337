/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salkhali <salkhali@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 09:21:43 by salkhali          #+#    #+#             */
/*   Updated: 2026/10/18 09:26:52 by salkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Function Name ft_putnbr_fd
// Prototype void ft_putnbr_fd(int n, int fd);
// Files to Submit -
// Parameters n: The integer to output.
// fd: The file descriptor on which to write.
// Return Value None
// External Function write
// Description Outputs the integer ’n’ to the specified file
// descriptor.

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	c;

	if (fd == -1)
		return ;
	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb / 10 > 0)
		ft_putnbr_fd(nb / 10, fd);
	c = nb % 10 + '0';
	write(fd, &c, 1);
}
