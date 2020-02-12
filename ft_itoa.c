/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 22:45:46 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/08 16:09:09 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int i;

	i = 0;
	if (n == 0)
	{
		i++;
		return (i);
	}
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		j;

	i = ft_len(n);
	if (!(ptr = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ptr[i] = '\0';
	i--;
	j = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_substr("-2147483648", 0, 11));
		n = n * (-1);
		ptr[0] = '-';
		j++;
	}
	while (i >= j)
	{
		ptr[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (ptr);
}
