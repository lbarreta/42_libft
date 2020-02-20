/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 22:45:53 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/19 22:41:38 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_sign(char *str)
{
	int i;
	int neg;
	int sign;

	i = 0;
	neg = 1;
	sign = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -1;
		sign++;
		i++;
	}
	if (sign > 1)
		return (0);
	else
		return (neg);
}

int			ft_atoi(char *str)
{
	int				neg;
	unsigned int	value;
	int				i;

	i = 0;
	value = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if ((neg = ft_sign(str + i)) == 0)
		return (0);
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	if (value > 2147483647 && neg == 1)
		return (-1);
	else if (value > 2147483648 && neg == -1)
		return (0);
	value = value * neg;
	return ((int)value);
}
