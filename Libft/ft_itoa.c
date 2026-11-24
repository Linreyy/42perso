/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:56:29 by maramos           #+#    #+#             */
/*   Updated: 2026/11/16 18:57:34 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static char	*cpy(long nb, int len, int n)
{
	char	*itoa;
	int		i;

	i = 0;
	itoa = malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (NULL);
	i = len - 1;
	while (i >= 0)
	{
		itoa[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		itoa[0] = '-';
	itoa[len] = '\0';
	return (itoa);
}

char	*ft_itoa(int n)
{
	char	*itoa;
	long	len;
	long	div;
	long	nb;

	nb = n;
	div = 1;
	len = 1;
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (div <= nb / 10)
	{
		len++;
		div = div * 10 ;
	}
	itoa = cpy(nb, len, n);
	return (itoa);
}

/*int	main(void)
{
	int n = -1000;
	printf("%s\n", ft_itoa(n));
	return (0);
}*/