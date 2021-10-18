/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 10:45:14 by bomoon            #+#    #+#             */
/*   Updated: 2021/05/19 12:39:13 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*test1;
	unsigned char		*test2;

	i = 0;
	test1 = (unsigned char *)s1;
	test2 = (unsigned char *)s2;
	while (i < n)
	{
		if (test1[i] != test2[i])
			return (test1[i] - test2[i]);
		i++;
	}
	return (0);
}
