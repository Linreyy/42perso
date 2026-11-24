/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:28:53 by maramos           #+#    #+#             */
/*   Updated: 2026/11/24 12:51:58 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
#include "libft.h"

static void	*free_all(char **tab, int j)
{
	while (j > 0)
	{
		j--;
		free(tab[j]);
	}
	free(tab);
	return (NULL);
}

static int	count_words(char const *s, char c)
{
	int		i;
	int		words;
	int		count;

	i = 0;
	count = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			words = 0;
		}
		else if (words == 0 && s[i] != c)
		{
			words = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static int	len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*ft_cpy(const char *s, char c)
{
	int		i;
	char	*tabj;

	i = 0;
	tabj = malloc (sizeof(char) * (len(&s[i], c) + 1));
	if (!tabj)
		return (NULL);
	while (s[i] != '\0' && s[i] != c)
	{
		tabj[i] = s[i];
		i++;
	}
	tabj[i] = '\0';
	return (tabj);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = malloc (sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		tab[j] = ft_cpy (&s[i], c);
		if (!tab[j])
			free_all(tab, j);
		i = i + (len(&s[i], c));
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

/*int    main(void)
{
    const char s[] = "Bonjour comment java";
    char c = 'j';
    int j = 0;
    char **tab = ft_split(s, c);
    while (tab[j] != NULL)
    {
      printf("%s\n", tab[j]);
      j++;
    }
    return (0);
}*/