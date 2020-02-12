/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 00:30:47 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/10 16:58:04 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;

	if (!s || !(ptr = malloc((len + 1) * sizeof(char))))
		return (NULL);
	ptr[len] = '\0';
	while (len > 0)
	{
		ptr[len - 1] = ((char *)s)[start + len - 1];
		len--;
	}
	return (ptr);
}
