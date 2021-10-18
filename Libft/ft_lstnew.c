/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 15:15:28 by bomoon            #+#    #+#             */
/*   Updated: 2021/05/30 15:17:15 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*result;

	if (!(result = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	result->next = NULL;
	result->content = content;
	return (result);
}
