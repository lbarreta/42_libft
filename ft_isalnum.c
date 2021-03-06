/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/24 23:47:22 by lbarreta          #+#    #+#             */
/*   Updated: 2020/01/24 23:51:00 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int arg)
{
	if ((arg >= '0' && arg <= '9') ||
	(arg >= 'a' && arg <= 'z') ||
	(arg >= 'A' && arg <= 'Z'))
		return (1);
	else
		return (0);
}
