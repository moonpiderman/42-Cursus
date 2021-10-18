/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:59:57 by bomoon            #+#    #+#             */
/*   Updated: 2021/06/06 19:24:22 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*value;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst)
	{
		value = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = value;
	}
	*lst = 0;
}
