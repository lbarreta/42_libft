/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 23:38:37 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/02 18:46:27 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int		ft_cont_size(char *str)
{
	size_t i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int			ft_strlcat(char *dest, char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t n;
	size_t z;

	i = ft_cont_size(dest);
	j = ft_cont_size(src);
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
