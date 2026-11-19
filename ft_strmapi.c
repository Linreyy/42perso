/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 19:31:48 by maramos           #+#    #+#             */
/*   Updated: 2026/11/17 15:58:05 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"
#include <stdio.h>

static char	upper(unsigned int n, char c)

{
	(void)n;
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	i;
	int				len;

	i = 0;
	len = ft_strlen(s);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char const	s[] = "bonJOUR";
	printf("%s\n", ft_strmapi(s, upper));
	return(0);
}*/