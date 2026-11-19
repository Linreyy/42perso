/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:52:24 by maramos           #+#    #+#             */
/*   Updated: 2026/11/12 17:13:08 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	ft_start(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (set[j])
	{
		while (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		j++;
	}
	start = i;
	return (start);
}

static int	ft_end(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	end;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	i--;
	while (set[j])
	{
		while (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		j++;
	}
	end = i;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmedstr;
	int		i;
	int		j;
	int		start;
	int		end;

	i = 0;
	j = 0;
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	trimmedstr = malloc (end - start + 1);
	if (!trimmedstr)
		return (NULL);
	while (i < start)
		i++;
	while (i <= end)
	{
		trimmedstr[j] = s1[i];
		i++;
		j++;
	}
	trimmedstr[i] = '\0';
	return (trimmedstr);
}

/*int	main(void)
{
	char const s1[] = "aaaaaaaademaina";
	char const set[] = "abc";
	printf("%s\n", ft_strtrim(s1, set));
	return(0);
}*/