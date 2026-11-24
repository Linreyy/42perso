/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:52:24 by maramos           #+#    #+#             */
/*   Updated: 2026/11/24 12:30:23 by maramos          ###   ########.fr       */
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
	if (s1[i] == '\0')
		return (0);
	while (set[j] && s1[i])
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
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
	if (s1[i] == '\0')
		return (-1);
	while (s1[i])
		i++;
	i--;
	while (i >= 0 && set[j])
	{
		if (s1[i] == set[j])
		{
			i--;
			j = 0;
		}
		else
			j++;
	}
	end = i;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmedstr;
	int		j;
	int		start;
	int		end;

	j = 0;
	if (!s1 || !set)
		return (NULL);
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (start > end)
		trimmedstr = malloc (1);
	else
		trimmedstr = malloc (end - start + 2);
	if (!trimmedstr)
		return (NULL);
	while (start <= end)
	{
		trimmedstr[j] = s1[start];
		start++;
		j++;
	}
	trimmedstr[j] = '\0';
	return (trimmedstr);
}

/*int	main(void)
{
	char const s1[] = "aaademain";
	char const set[] = "aa";
	char	*trimmedstr;
	trimmedstr = ft_strtrim(s1, set);
	if (!trimmedstr)
		return (0);
	printf("%s\n", trimmedstr);
	return(0);
}*/