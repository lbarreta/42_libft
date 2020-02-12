/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:49:22 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/01 18:26:18 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int i;

	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
		{
			str = str + i;
			return (str);
		}
		i--;
	}
	return (0);
}
