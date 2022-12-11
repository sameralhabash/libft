/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:09:36 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/10 16:33:24 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	to_find;
	int		i;

	last = (char *)s;
	to_find = (char)c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (last[i] == to_find)
			return (last + i);
		i--;
	}
	if (last[i] == to_find)
		return (last);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int     main()
{
        char str[50] = "Hello Thelre";
        printf("%s\n",ft_strrchr(str, 'l'));
        printf("%s\n",strrchr(str, 'l'));
        return (0);
}*/
