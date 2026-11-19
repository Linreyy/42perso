/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:06:44 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:53:54 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*dest2;
	const char		*src2;
	unsigned int	i;

	dest2 = dest;
	src2 = src;
	i = 0;
	if (src2 > dest2)
	{
		i = n;
		while (src2[i] != '\0' && i > n)
		{
			dest2[i] = src2[i];
			i--;
		}
	}
	else
	{
		while (src2[i] && i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest);
}

/*int	main(void)
{
	const char	src[] = "GRGIQAJDAW";
	char	dest[] = "WOIDJ";
	printf(memmove(dest, src, 5));
	printf("\n");
	printf(ft_memmove(dest, src, 5));
	return (0);
}*/