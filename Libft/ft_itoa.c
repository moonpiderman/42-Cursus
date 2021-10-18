/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 20:32:58 by bomoon            #+#    #+#             */
/*   Updated: 2021/05/31 12:59:51 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		instead_of(char *str, int length, int n)
{
	int		i;

	i = 0;
	if (n == 0)
		str[i] = '0';
	while (n != 0)
	{
		str[length - i - 1] = n % 10 + '0';
		n /= 10;
		i++;
	}
}

static int		check_len(int n, int *minus)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			*minus = 1;
			return (10);
		}
		else
		{
			*minus = 1;
			n = -n;
		}
	}
	else if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		minus;
	int		len;

	minus = 0;
	len = check_len(n, &minus);
	if (!(str = (char *)malloc(sizeof(char) * (len + minus + 1))))
		return (NULL);
	str[len + minus] = '\0';
	if (n == -2147483648)
	{
		str[10] = '8';
		n = 214748364;
		str[0] = '-';
		len--;
	}
	else if (minus == 1)
	{
		str[0] = '-';
		n = -n;
	}
	instead_of(&str[minus], len, n);
	return (&str[0]);
}
