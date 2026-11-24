/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:41:37 by maramos           #+#    #+#             */
/*   Updated: 2026/11/19 10:38:24 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	len;
	t_list			*temp;

	len = 0;
	temp = lst;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
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

	printf("%i\n", ft_lstsize(lst));
	while(lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return(0);
}*/