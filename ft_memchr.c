/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:04:39 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:53:35 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	str = s;
	i = 0;
	while (i < n && str[i] != c)
		i++;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}

/*int	main(void)
{
	const char s[] = "Good Morning Vietnam";
	int	c = 'M';
	size_t n = 4;
	printf(ft_memchr(s, c, n));
	return (0);
}*/