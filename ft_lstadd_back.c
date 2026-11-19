/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 15:01:50 by maramos           #+#    #+#             */
/*   Updated: 2026/11/19 11:52:57 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

/*int	main(void)
{	
	t_list *node2 = malloc (16);
	node2->content = "3";
	node2->next = NULL;

	t_list *node1 = malloc (sizeof(t_list));
	node1->content = "2";
	node1->next = node2;

	t_list *lst = malloc (sizeof(t_list));
	lst->content = "1";
	lst->next = node1;

	t_list *new = malloc (sizeof(t_list));
	new->content = "new";
	new->next = NULL;
	
	ft_lstadd_back(&lst, new);
	while(lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}*/