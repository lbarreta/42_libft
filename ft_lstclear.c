/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 23:49:13 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/12 00:13:32 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp_n;
	t_list *temp;

	temp = *lst;
	while (temp)
	{
		temp_n = temp->next;
		del(temp->content);
		free(temp);
		temp = temp_n;
	}
	*lst = NULL;
}
