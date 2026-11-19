/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:42:33 by maramos           #+#    #+#             */
/*   Updated: 2026/11/18 11:42:35 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/*int	main(void)
{
	t_list	*lst = malloc (sizeof(t_list));
	t_list	*new = malloc (sizeof(t_list));
	
	lst->content = "ca va";
	new->content = "Salut";
	lst->next = NULL;
	new->next = NULL;
	ft_lstadd_front(&lst, new);
	while(lst != NULL)
	{	
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}*/