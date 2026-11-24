/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 18:50:07 by maramos           #+#    #+#             */
/*   Updated: 2026/11/18 18:50:08 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	plusone(void *s)
{
	unsigned int	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while(str[i])
	{
		str[i] = str[i] + 1;
		i++;
	}
}*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (!lst || !f)
		return ;
	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

/*int	main(void)
{
	t_list *node2 = malloc (sizeof(t_list));
	node2->content = ft_strdup("3");
	node2->next = NULL;

	t_list *node1 = malloc (sizeof(t_list));
	node1->content = ft_strdup("2");
	node1->next = node2;

	t_list *lst = malloc (sizeof(t_list));
	lst->content = ft_strdup("1");
	lst->next = node1;
	ft_lstiter(lst, plusone);
	while(lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}*/