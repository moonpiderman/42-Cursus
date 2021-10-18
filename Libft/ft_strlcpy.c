/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:33:36 by bomoon            #+#    #+#             */
/*   Updated: 2021/06/07 12:54:04 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (!dst || !src)
		return (0);
	while (src[index] && index + 1 < dstsize)
	{
		dst[index] = src[index];
		index++;
	}
	if (dstsize != 0)
		dst[index] = '\0';
	while (src[index])
		index++;
	return (index);
}
