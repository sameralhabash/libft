/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:48:44 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/08 17:15:24 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	str = 0;
	if (!s1 || !set)
		return (NULL);
	if (*set == 0)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (s1[end] && ft_strchr(set, s1[end]) && start < end)
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char *str;
	str = ft_strtrim ("Hello World", "Hd");
	printf("%s\n", str);
	return (0);
}*/
