/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 16:41:19 by bomoon            #+#    #+#             */
/*   Updated: 2021/05/31 17:21:01 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*result;
	size_t		i;

	i = 0;
	result = NULL;
	while (s[i] != 0)
	{
		if (s[i] == (unsigned char)c)
			result = (char *)&s[i];
		i++;
	}
	if ((unsigned char)c == 0)
		result = (char *)&s[ft_strlen(s)];
	return (result);
}
