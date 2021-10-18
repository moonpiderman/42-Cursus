/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 14:47:14 by bomoon            #+#    #+#             */
/*   Updated: 2021/05/31 17:36:49 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *str, const char *find, size_t t)
{
	size_t	i;

	i = 0;
	while (find[i] != '\0')
	{
		if (str[t + i] != find[i])
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	t;
	size_t	look;
	int		result;
	char	*test;

	t = 0;
	look = 0;
	result = 0;
	test = (char *)haystack;
	if (needle[0] == '\0')
		return (test);
	if (haystack[0] == '\0')
		return (NULL);
	look = ft_strlen(needle);
	while (t + look <= len)
	{
		if (test[t] == needle[0])
		{
			result = check(test, needle, t);
			if (result == 1)
				return (&test[t]);
		}
		t++;
	}
	return (NULL);
}
