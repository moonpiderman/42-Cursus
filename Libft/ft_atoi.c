/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 13:10:25 by bomoon            #+#    #+#             */
/*   Updated: 2021/06/06 14:46:48 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\f' || c == '\r'
			|| c == '\v' || c == ' ')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int	result;
	int	minus;

	result = 0;
	minus = 1;
	while (is_space(*str) == 1)
		str++;
	if (*str == '-')
		minus *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (minus * result);
}
