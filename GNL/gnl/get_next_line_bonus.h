/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:54:34 by bomoon            #+#    #+#             */
/*   Updated: 2021/10/06 16:16:13 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(char *s);

void	ft_strdel(char **ptr);
char	*ft_isnewline(const char *s);
char	*ft_out(int fd, char *line, char **aux, char *buff);
char	*tmp_join(int fd, char **saved, char *buff, ssize_t bound);
char	*get_line(int fd, char **aux, ssize_t i, char *ptr);
char	*get_next_line(int fd);

#endif