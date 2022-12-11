/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c	                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:56:46 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/13 16:09:13 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		new->next = NULL;
	else
		new->next = *lst;
	*lst = new;
}
