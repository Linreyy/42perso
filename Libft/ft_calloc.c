/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 18:39:21 by maramos           #+#    #+#             */
/*   Updated: 2026/11/23 15:46:00 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	unsigned char	*calloc;
	size_t			i;

	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	i = 0;
	calloc = malloc (total_size);
	if (!calloc)
		return (NULL);
	while (i < total_size)
	{
		calloc[i] = 0;
		i++;
	}
	return (calloc);
}

/*int	main(void)
{
	size_t n = 2;
	size_t size = 3;
	ft_calloc(n, size);
	printf(ft_calloc(n, size));
	return(0);
}*/