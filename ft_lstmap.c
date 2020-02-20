/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbarreta <lbarreta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 00:31:43 by lbarreta          #+#    #+#             */
/*   Updated: 2020/02/17 22:09:16 by lbarreta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	if (!(ptr = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&ptr, del);
		return (NULL);
	}
	ptr->next = ft_lstmap(lst->next, f, del);
	return (ptr);
}
