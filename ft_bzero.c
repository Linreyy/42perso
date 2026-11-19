/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:21:47 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:53:02 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*dest;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char str[] = "Hello";
	bzero(str, 3);
	printf("%c\n", str[3]);
	return (0);
}*/