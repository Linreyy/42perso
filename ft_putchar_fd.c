/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 11:30:26 by maramos           #+#    #+#             */
/*   Updated: 2026/11/17 11:30:29 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <string.h>
#include <fcntl.h>*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

/*int	main(void)
{
	char c = 'a';
	int fd = open("test", O_RDWR);
	ft_putchar_fd(c, fd);
	return (0);
}*/