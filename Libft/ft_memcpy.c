/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:10:16 by bomoon            #+#    #+#             */
/*   Updated: 2021/05/03 21:19:21 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*result;

	result = dst;
	if (!dst && !src)
		return (0);
	while (n--)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
	}
	return (result);
}
