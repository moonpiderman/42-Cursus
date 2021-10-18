/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 10:28:04 by bomoon            #+#    #+#             */
/*   Updated: 2021/10/05 16:46:33 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		join[i] = s2[j];
		i++;
		j++;
	}
	join[i] = '\0';
	return (join);
}

char	*ft_isnewline(const char *s)
{
	char	c;

	c = '\n';
	while (*s != '\0')
	{
		if ('\n' == *s)
			return ((char *)s);
		s++;
	}
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	tmp_start;
	size_t	con_substr;
	size_t	l;

	if (!s)
		return (0);
	l = ft_strlen(s);
	tmp_start = start;
	con_substr = 0;
	while (con_substr < len && s[tmp_start++])
		con_substr++;
	substr = (char *)malloc(con_substr + 1);
	if (!substr)
		return (0);
	tmp_start = start;
	con_substr = 0;
	while (con_substr < len && tmp_start < l)
		substr[con_substr++] = s[tmp_start++];
	substr[con_substr] = '\0';
	return (substr);
}

char	*ft_strdup(char *s)
{
	char	*s_dup;
	size_t	i;
	size_t	len;

	len = ft_strlen(s) + 1;
	s_dup = (char *)malloc(sizeof(char) * len);
	if (!s_dup)
		return (0);
	i = 0;
	while (i < len)
	{
		((unsigned char *)s_dup)[i] = ((unsigned char *)s)[i];
		i++;
	}
	s_dup[i - 1] = '\0';
	return (s_dup);
}
