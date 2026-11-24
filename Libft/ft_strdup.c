/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 11:36:15 by maramos           #+#    #+#             */
/*   Updated: 2026/11/23 15:45:28 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*str;
	size_t		i;
	size_t		len;

	i = 0;
	len = 0;
	while (s[len])
		len++;
	str = malloc((len) * (sizeof(char)) + 1);
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	const char	s[] = "Hellowdawdaw4654";
	printf("%s\n", ft_strdup(s));
	printf("%s\n", strdup(s));
	return(0);
}*/