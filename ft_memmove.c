/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:54:07 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/02 20:45:07 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
	{
		while (len >= 0)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len--;
		}
	}
	return ((void *)dest);
}
