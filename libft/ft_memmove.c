/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:41:14 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/10 14:57:35 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (dest == src || n == 0)
		return (dest);
	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	if (dest < src)
	{
		while (n--)
		{
			*str1++ = *str2++;
		}
	}
	else
	{
		str1 = str1 + (n - 1);
		str2 = str2 + (n - 1);
		while (n--)
			*str1-- = *str2--;
	}
	return (dest);
}
/*
#include <stdio.h>
int main() {
	char Like[10] = { "ILikeYou" };
	char Hate[10] = { "IHateYou" };
	char str[10] = "12345678";

	printf("memmove before : %s\n", Like);
	ft_memmove(Like + 1, Hate + 1, 4);
	printf("memmove after : %s\n", Like);

	printf("memmove before : %s\n", str);
	ft_memmove(str + 3, str + 1, 3);
	printf("memmove after : %s\n", str);

	return 0;
}*/
