/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:34:59 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/10 14:05:50 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str1;
	const char	*str2;

	i = 0;
	if (!dest && !src)
		return (NULL);
	str1 = dest;
	str2 = src;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "memory test";
	char str1[50];
	char str2[50];
	ft_memcpy(str1, str, strlen(str) +1);
	ft_memcpy(str2, "hello", 6);
	printf("str: %s\nstr1: %s\nstr2: %s\n", str, str1, str2);
	return(0);
}*/
