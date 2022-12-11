/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salhabas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:37:31 by salhabas          #+#    #+#             */
/*   Updated: 2022/11/08 14:21:07 by salhabas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest;

	if (nmemb == 0 || size == 0)
	{
		dest = malloc(1);
		if (!dest)
			return (0);
		((char *)dest)[0] = 0;
		return (dest);
	}
	if (nmemb * size < size || nmemb * size < nmemb)
		return (0);
	dest = (void *) malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, (nmemb * size));
	return (dest);
}
