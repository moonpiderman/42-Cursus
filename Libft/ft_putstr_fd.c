/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:51:11 by bomoon            #+#    #+#             */
/*   Updated: 2021/05/27 21:57:15 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = 0;
	if (fd < 0)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}