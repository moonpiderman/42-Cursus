/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 16:33:42 by bomoon            #+#    #+#             */
/*   Updated: 2021/06/06 15:07:10 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char f, char const *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (f == str[i])
			return (1);
		i++;
	}
	return (0);
}

static int	start_point(char const *s, char const *val)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (check(s[i], val) == 0)
			return (i);
		i++;
	}
	return (-1);
}

static int	end_point(char const *s, char const *val)
{
	int		i;

	i = (int)(ft_strlen(s)) - 1;
	while (i >= 0)
	{
		if (check(s[i], val) == 0)
			return (i);
		i--;
	}
	return (-1);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		sp;
	int		ep;
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	sp = start_point(s1, set);
	ep = end_point(s1, set);
	if (sp == -1 || ep == -1)
	{
		str = (char *)malloc(1);
		str[0] = 0;
		return (str);
	}
	if (!(str = (char *)malloc(sizeof(char) * (ep - sp + 2))))
		return (NULL);
	while (sp <= ep)
		str[i++] = s1[sp++];
	str[i] = '\0';
	return (str);
}
