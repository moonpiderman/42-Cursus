/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 22:17:44 by bomoon            #+#    #+#             */
/*   Updated: 2021/05/23 22:27:57 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if ((result = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1))) == 0)
		return (NULL);
	while (i < s1_len)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < s2_len)
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}
