/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 21:12:57 by bomoon            #+#    #+#             */
/*   Updated: 2021/06/07 11:20:51 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned char		*s;
	size_t				i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d < s)
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (i < len)
		{
			d[len - i - 1] = s[len - i - 1];
			i++;
		}
	return (d);
}
