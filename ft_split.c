/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 13:28:53 by maramos           #+#    #+#             */
/*   Updated: 2026/11/16 13:39:57 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

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

static char	*ft_cpy(char *tab, const char *s, char c)
{
	int	i;

	i = 0;
	tab = malloc (sizeof(char) * (len(&s[i], c) + 1));
	if (!tab)
	{
		free(tab);
		return (NULL);
	}
	while (s[i] != '\0' && s[i] != c)
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split(const char *s, char c)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc (sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
	{
		free(tab);
		return (NULL);
	}
	while (s[i])
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		tab[j] = ft_cpy (tab[j], &s[i], c);
		i = i + (len(&s[i], c) + 1);
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