/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:53:16 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/08 16:16:31 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_size;
	size_t	s2_size;

	s1_size = ft_strlen(s1);
	s2_size = ft_strlen(s2);
	if (!s1 && !s2)
		return (NULL);
	else if (!s1 || !s2)
	{
		if (!s1)
			return (ft_strdup(s2));
		else
			return (ft_strdup(s1));
	}
	str = (char *)malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, s1, s1_size + 1);
	ft_strlcat(str + (s1_size), s2, s2_size + 1);
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char	*s1 = "Hello ";
	char	*s2 = "World";
	char	*str;
	str = ft_strjoin(s1, s2);
	printf("%s\n", str);
	return (0);
}*/
