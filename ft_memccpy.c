/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:18:47 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/02 18:44:20 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void *src, int c, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)src)[i] == ((unsigned char)c))
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			dest = dest + i + 1;
			return ((void *)dest);
		}
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (0);
}
