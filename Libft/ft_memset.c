/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:22:00 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:53:57 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*dest;

	dest = s;
	i = 0;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (s);
}

/*int main(void)
{
    char	str[] = "Salut tout le monde";
	//printf(memset (str , 'a', 2 *sizeof(char)));
	printf(ft_memset(str,'a',2));
	return (0);
}*/
