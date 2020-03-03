/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 19:49:39 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/21 00:52:43 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		if (((unsigned char *)str)[i] == ((unsigned char)c))
			return ((void *)str + i);
		i++;
	}
	return (0);
}
