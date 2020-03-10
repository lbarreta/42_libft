/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 23:38:37 by lbarreta          #+#    #+#             */
/*   Updated: 2020/03/03 21:38:38 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t n;
	size_t z;

	i = ft_strlen(dest);
	j = ft_strlen(src);
	if (size <= i)
		return (size + j);
	else
	{
		z = i;
		n = 0;
		while (src[n] != '\0' && ((i + n + 1) < size))
		{
			dest[z] = src[n];
			n++;
			z++;
		}
		dest[z] = '\0';
		return (i + j);
	}
}
