/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:05:13 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/13 16:21:04 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tnode;

	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			tnode = ft_lstlast(*lst);
			tnode->next = new;
		}
	}
}
