/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 11:23:54 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/10 11:32:15 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int     main()
{
        printf("%d\n", ft_isalpha('A'));
        printf("%d\n", ft_isalpha('m'));
        printf("%d\n", ft_isalpha('4'));
        return (0);
}*/
