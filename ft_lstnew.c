/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 11:42:55 by maramos           #+#    #+#             */
/*   Updated: 2026/11/18 11:43:34 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content) // liste
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*int	main(void)
{
	
	printf("%d\n", ft_atoi(ft_lstnew("15")->content));
	return(0);
}*/