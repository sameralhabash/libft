/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:23:46 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/10 11:34:30 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int     main()
{
        printf("%d\n", ft_isdigit('A'));
        printf("%d\n", ft_isdigit('m'));
        printf("%d\n", ft_isdigit('4'));
        return (0);
}*/
