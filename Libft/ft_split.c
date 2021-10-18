/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 17:17:05 by bomoon            #+#    #+#             */
/*   Updated: 2021/06/07 20:41:12 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char				**malloc_error(char **str)
{
	int		i;

	i = 0;
	while (!str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

static char				*ft_strndup(const char *str, int len)
{
	char	*result;
	int		i;

	result = NULL;
	i = 0;
	if (len == 0)
		return (NULL);
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static char				*create_str(const char *str, char c, int *flag)
{
	int		i;
	char	*mid;

	*flag = 1;
	mid = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			mid = ft_strndup(str, i);
			if (!mid)
				return (NULL);
			return (mid);
		}
		else if (i == (int)(ft_strlen(str)) - 1)
		{
			mid = ft_strndup(str, i + 1);
			if (!mid)
				return (NULL);
			return (mid);
		}
		i++;
	}
	return (NULL);
}

static int				word_count(const char *str, char c)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && str[0] != c) ||
				(str[i] == c && str[i + 1] != c && str[i + 1] != '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

char					**ft_split(const char *s, char c)
{
	char	**str;
	char	*mid;
	int		flag;
	int		index;
	int		str_index;

	str_index = 0;
	index = 0;
	if (!(str = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1))))
		return (NULL);
	while (s[index] != '\0')
	{
		flag = 0;
		if (index == 0 && s[0] != c)
			mid = create_str(&s[index], c, &flag);
		else if ((s[index] == c && s[index + 1] != c && s[index + 1] != '\0'))
			mid = create_str(&s[index + 1], c, &flag);
		if (flag == 1 && mid == NULL)
			return (malloc_error(str));
		else if (flag == 1)
			str[str_index++] = mid;
		index++;
	}
	str[str_index] = 0;
	return (str);
}
