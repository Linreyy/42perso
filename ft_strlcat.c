/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:30:20 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:54:25 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	destlen;
	unsigned int	srclen;
	unsigned int	i;
	unsigned int	y;

	destlen = 0;
	srclen = 0;
	i = 0;
	y = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[srclen] != '\0')
		srclen++;
	destlen = i;
	if (i == size)
		return (size + srclen);
	while (src[y] != '\0' && i < size - 1)
	{
		dst[i] = src[y];
		i++;
		y++;
	}
	dst[i] = '\0';
	return (destlen + srclen);
}

/*int	main(void)
{
	const char	src[] = "Vietnam";
	char	dest[50] = "Good";
	size_t size = 2;
	printf ("%ld\n", strlcat(dest, src, size));
	printf("%s\n", dest);
	return(0);
}*/