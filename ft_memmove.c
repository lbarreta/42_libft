/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:54:07 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/18 00:02:37 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!len || dest == src)
		return (dest);
	if (dest < src)
		ft_memcpy(dest, src, len);
	else
	{
		len--;
		while ((len + 1) > 0)
		{
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
			len--;
		}
	}
	return ((void *)dest);
}
