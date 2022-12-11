/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:53:11 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/09 12:10:06 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	ft_add_index(unsigned int index, char *s)
{
	putchar(*s);
	putchar('[');
	putchar(']');
}
int	main()
{
	char s50[50];
	strcpy(s50, "Shauna");
	ft_striteri(s50, ft_add_index);//FT_STRITERI	ft_add_index
	printf("\n");
	printf("\n");
	printf("[expected]\n");
	printf("S[]h[]a[]u[]n[]a[]\n");
	return 0;
}*/
