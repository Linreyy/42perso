/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:40:54 by maramos           #+#    #+#             */
/*   Updated: 2026/11/16 19:09:04 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;
	size_t	sublen;

	i = 0;
	j = 0;
	sublen = len;
	if (!s)
		return (NULL);
	sub = malloc (sublen + 1);
	if (!sub)
		return (NULL);
	while (i < start && s[i] != '\0')
		i++;
	while (j < sublen && s[i] != '\0')
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}

/*int	main(void)
{
	const char	s[] = "";
	unsigned int start = 100;
	size_t len = 5;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
}*/