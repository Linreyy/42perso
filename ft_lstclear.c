/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 17:43:35 by maramos           #+#    #+#             */
/*   Updated: 2026/11/18 17:45:43 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst || !del)
		return ;
	temp = *lst;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free (*lst);
		*lst = temp;
	}
	*lst = NULL;
}
