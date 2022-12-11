/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:23:25 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/13 16:30:12 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*tnode;

	if (!lst)
		return (0);
	size = 0;
	tnode = lst;
	while (tnode)
	{
		tnode = tnode->next;
		size++;
	}
	return (size);
}
