/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:18:45 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/10 16:10:57 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	first;
	int		i;

	first = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == first)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == first)
		return ((char *)s + i);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[50] = "Hello There";
	printf("%s\n",ft_strchr(str, 'T'));
	printf("%s\n",strchr(str, 'T'));
	return (0);
}*/
