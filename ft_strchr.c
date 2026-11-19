/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:29:08 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:54:02 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	const char	*str;

	i = 0;
	str = s;
	while (str[i] != c)
		i++;
	if (str[i] == c)
		return ((char *)&str[i]);
	return (NULL);
}

/*int	main(void)
{
	const char	*str = "Good Vorning Vietnam";
	int	c = 'M';
	printf (ft_strchr(str, c));
	return (0);
}*/