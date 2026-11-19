/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:06:38 by maramos           #+#    #+#             */
/*   Updated: 2026/11/11 12:54:42 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t lengh)
{
	size_t	i;

	i = 0;
	while (i < lengh && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/*int    main(void)
{
    const char first[] = "Halloo";
    const char second[] = "Hall";
    size_t lengh = 7;
    printf("%i\n", strncmp(first, second, lengh));
    return (0);
}*/