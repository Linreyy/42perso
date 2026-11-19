/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:27:37 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:54:46 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <bsd/string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	y;

	i = 0;
	y = 0;
	while (little[y])
		y++;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((big[i] && little[j]) && big[i] == little[j])
		{
			j++;
			i++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i - y]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	big[100] = "Comment ca va arthur matteo flora";
	char 	little[100] = "ca va";
	size_t len = 25;
	printf ("%s\n" ,strnstr(big, little, len));	
	return (0);
}*/