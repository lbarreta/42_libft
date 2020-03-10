/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 15:37:20 by lbarreta          #+#    #+#             */
/*   Updated: 2020/03/03 22:20:28 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	if (!s || !f)
		return (NULL);
	i = ft_strlen((char *)s);
	if (!(ptr = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ptr[i] = '\0';
	i--;
	while (i >= 0)
	{
		ptr[i] = f((unsigned int)i, (char)s[i]);
		i--;
	}
	return (ptr);
}
