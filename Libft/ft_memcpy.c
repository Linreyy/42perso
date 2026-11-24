/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:39:07 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:53:50 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	const char		*src2;
	char			*dest2;

	i = 0;
	src2 = src;
	dest2 = dest;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

/*int 	main(void)
 {
	char dest[] = "Hellllo";
	char	src[] = "Woqqqq";
	printf(ft_memcpy(dest, src, 4));
	//printf(memcpy(dest, src, 4));
	return (0);
 }*/