/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 12:35:45 by maramos           #+#    #+#             */
/*   Updated: 2026/11/17 12:36:09 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <fcntl.h>*/

static void	pchar(int nb, int fd)
{
	write (fd, &nb, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write (fd, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr_fd (nb / 10, fd);
		ft_putnbr_fd (nb % 10, fd);
	}
	if (nb < 10)
		pchar(nb + '0', fd);
}

/*int	main(void)
{
	int	n = 0;
	int	fd = open ("test", O_RDWR);
	ft_putnbr_fd(n, fd);
	return (0);
}*/