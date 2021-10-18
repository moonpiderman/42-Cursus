/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:10:42 by bomoon            #+#    #+#             */
/*   Updated: 2021/05/30 17:15:58 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_nd;
	t_list	*nd;

	nd = NULL;
	while (lst)
	{
		new_nd = ft_lstnew(f(lst->content));
		if (!new_nd)
		{
			ft_lstclear(&nd, del);
			return ((void *)(0));
		}
		ft_lstadd_back(&nd, new_nd);
		lst = lst->next;
	}
	new_nd = NULL;
	return (nd);
}
