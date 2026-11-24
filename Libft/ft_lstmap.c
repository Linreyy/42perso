/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramos <maramos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/23 15:44:37 by maramos           #+#    #+#             */
/*   Updated: 2026/11/23 15:44:39 by maramos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free (content);
}

void	*plusone(void *s)
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
	return(str);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*headnew;
	t_list	*temp;
	void	*content_f;
	t_list	*newnods;

	if (!lst || !f || !del)
		return (NULL);
	headnew = NULL;
	temp = lst;
	while (temp != NULL)
	{
		content_f = f(temp->content);
		newnods = ft_lstnew(content_f);
		if (!newnods)
		{
			del(content_f);
			ft_lstclear(&headnew, del);
			return (NULL);
		}
		ft_lstadd_back(&headnew, newnods);
		temp = temp->next;
	}
	return (headnew);
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
	
	t_list	*newlist = ft_lstmap(lst, plusone, del);
	while (newlist)
	{
		printf("%s\n", (char *)newlist->content);
		newlist = newlist->next;
	}
	return (0);
}*/