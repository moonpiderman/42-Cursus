/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 16:32:29 by bomoon            #+#    #+#             */
/*   Updated: 2021/06/06 19:27:54 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*result;

	result = *lst;
	if (lst == NULL || new == NULL)
		return ;
	else if (*lst == NULL && new != NULL)
	{
		*lst = new;
		return ;
	}
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;
	*lst = result;
}
