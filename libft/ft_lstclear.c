/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c           	                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:45:37 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/13 16:58:03 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{							
	t_list	*tnode;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		tnode = *lst;
		*lst = tnode-> next;
		free(tnode);
	}
	*lst = NULL;
}
