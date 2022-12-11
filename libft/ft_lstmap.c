/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:07:29 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/13 17:31:23 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;
	void	*temp;

	if (!lst)
		return (0);
	newlist = NULL;
	while (lst)
	{
		if (f)
			temp = f(lst->content);
		else
			temp = lst->content;
		newnode = ft_lstnew(temp);
		if (newnode == NULL)
		{
			ft_lstclear(&newlist, del);
			return (0);
		}
		ft_lstadd_back(&newlist, newnode);
		newnode = newnode->next;
		lst = lst->next;
	}
	newnode = 0;
	return (newlist);
}
