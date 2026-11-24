/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 13:12:51 by maramos           #+#    #+#             */
/*   Updated: 2026/11/19 10:37:39 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

/*int	main(void)
{
	t_list *node2 = malloc (sizeof(t_list));
	node2->content = "3";
	node2->next = NULL;

	t_list *node1 = malloc (sizeof(t_list));
	node1->content = "2";
	node1->next = node2;

	t_list *lst = malloc (sizeof(t_list));
	lst->content = "1";
	lst->next = node1;

	t_list *lastnode = ft_lstlast(lst);
	printf("%s\n", (char *)lastnode->content);
}*/