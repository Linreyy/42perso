/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 17:01:07 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:53:22 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c > 127)
		return (0);
	else
		return (1);
}

/*int main(void)
{
    char c = 'a';
    printf("%i\n", ft_isascii(c));
    return (0);
}*/