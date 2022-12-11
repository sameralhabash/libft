/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:30:20 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/10 17:22:31 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && \
	(unsigned char)s1[i] && (unsigned char)s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str1[10] = "aaa";
	char str2[10] = "aab";
	printf("%d\n", ft_strncmp(str1, str2, 2));
	printf("%d\n", strncmp(str1, str2, 2));
	printf("%d\n", ft_strncmp(str1, str2, 4));
	printf("%d\n", strncmp(str1, str2, 4));
	printf("%d\n", ft_strncmp(str1, str2, 0));
	printf("%d\n", strncmp(str1, str2, 0));
	return (0);
}*/
