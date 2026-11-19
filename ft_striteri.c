/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 11:19:12 by maramos           #+#    #+#             */
/*   Updated: 2026/11/17 18:23:21 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	upper(unsigned int i, char *s)

{
	i = 0;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	f(i, s);
}

/*int	main(void)
{
	char	str[] = "heLdGo";
	ft_striteri(str, upper);
	printf("%s\n", str);
	return (0);
}*/