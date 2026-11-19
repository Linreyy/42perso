/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:41:15 by maramos           #+#    #+#             */
/*   Updated: 2026/11/17 17:40:08 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include "libft.h"

int	ft_toupper(int c)

{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	else
		return (c);
}

/*int	main(void)
{
	printf("%c\n", ft_toupper('4'));
	return (0);
}*/