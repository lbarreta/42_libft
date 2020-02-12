/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 22:38:54 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/05 01:27:11 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] == c)
		{
			str = str + i;
			return (str);
		}
		i++;
	}
	return (0);
}
