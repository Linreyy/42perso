/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:28:15 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:54:50 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != c)
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	s[] = "Good Morning Vietnam";
	int	c = 't';
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}*/