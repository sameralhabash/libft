/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:12:46 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/10 13:32:27 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[50];
	strcpy(s, "12345678");
	printf("[ft_bzero]\n");
	ft_bzero(s, 1);//FT_BZERO
	printf("(%s)\n", s);
	printf("\n");
	printf("[bzero]\n");
	char s1[51];
	strcpy(s1, "12345678");
	bzero(s1, 1);
	printf("(%s)\n", s1);
	printf("\n");
}*/
