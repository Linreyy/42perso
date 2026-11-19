/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:36:01 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:53:39 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*str1;
	char			*str2;
	unsigned int	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && str1[i] != '\0' && str1[i] == str2 [i])
		i++;
	return (str1[i] - str2[i]);
}

/*int	main(void)
{
	const char	s1[10] = "";
	const char	s2[10] = "Hellwo";
	size_t n = 1;
	printf("%i\n",ft_memcmp(s1, s2, n));
	return (0);
}*/