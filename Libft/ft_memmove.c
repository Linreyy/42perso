/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:06:44 by maramos           #+#    #+#             */
/*   Updated: 2026/11/24 12:32:17 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char				*dest2;
	const unsigned char			*src2;
	size_t						i;

	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	i = 0;
	if (dest2 > src2)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest2[i] = src2[i];
		}
	}
	else
	{
		while (i < n)
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