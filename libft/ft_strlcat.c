/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:15:00 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/08 16:47:24 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (size < dst_size + 1)
		return (size + src_size);
	if (size > dst_size + 1)
	{
		while (src[i] != '\0' && dst_size + 1 + i < size)
		{	
			dst[dst_size + i] = src[i];
			i++;
		}
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
/*
#include <string.h>
#include <stdio.h>
int				main(void)
{
	char			dest[50] = "hello ";
	char			src[50] = "there";
	unsigned int	size;

	size = 5;
	printf("%s\n", strncat(dest, src, size));
	printf("%lu\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
}*/
