/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 11:31:21 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:54:30 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

/*int	main(void)
{
	const char	src[] = "Vietnam";
	char	dest[50] = "Good";
	size_t size = 3;
	printf ("%ld\n", strlcpy(dest, src, size));
	printf(dest);
	printf("\n");
	printf("%ld\n", ft_strlcpy(dest, src, size));
	printf(dest);
	return (0);
}*/