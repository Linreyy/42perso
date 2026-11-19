/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 14:15:58 by maramos           #+#    #+#             */
/*   Updated: 2026/11/12 17:12:46 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	len(char const *s1, char const *s2)
{
	int	s1len;
	int	s2len;

	s1len = 0;
	s2len = 0;
	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;
	return (s1len + s2len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*join;

	i = 0;
	j = 0;
	join = malloc(len(s1, s2) + 1);
	if (!join)
		return (NULL);
	while (s1[i] != '\0')
	{
		join[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		join[j] = s2[i];
		j++;
		i++;
	}
	join[j] = '\0';
	return (join);
}

/*int	main(void)
{
	char const s1[] = "";
	char const s2[] = "H";
	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}*/