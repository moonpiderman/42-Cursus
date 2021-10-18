/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bomoon <bomoon@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:52:22 by bomoon            #+#    #+#             */
/*   Updated: 2021/10/06 11:20:39 by bomoon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	ft_strdel(char **saved)
{
	if (saved != NULL)
	{
		free(*saved);
		*saved = NULL;
	}
}

char	*ft_out(int fd, char *line, char **saved, char *buff)
{
	char		*ptr;
	size_t		len;

	free(buff);
	len = 0;
	while (saved[fd][len] != '\n')
		len++;
	line = ft_substr(saved[fd], 0, len + 1);
	ptr = ft_strdup(&(saved[fd][len + 1]));
	if (!ptr)
	{
		free(line);
		return (0);
	}
	free(saved[fd]);
	saved[fd] = ptr;
	return (line);
}

char	*tmp_join(int fd, char **saved, char *buff, ssize_t bound)
{
	char		*tmp;

	tmp = ft_strjoin(saved[fd], buff);
	ft_strdel(&saved[fd]);
	saved[fd] = tmp;
	if (bound < 0)
		ft_strdel(&saved[fd]);
	return (saved[fd]);
}

char	*get_line(int fd, char **saved, ssize_t bound, char *buff)
{
	char		*line;

	line = 0;
	while (bound > 0)
	{
		if (ft_isnewline(saved[fd]))
			return (ft_out(fd, line, saved, buff));
		bound = read(fd, buff, bound);
		buff[bound] = '\0';
		if (!ft_isnewline(saved[fd]) && bound == 0)
		{
			line = ft_strdup(saved[fd]);
			ft_strdel(&saved[fd]);
			if (*line)
			{
				free(buff);
				return (line);
			}
		}
		saved[fd] = tmp_join(fd, saved, buff, bound);
	}
	ft_strdel(&line);
	free(buff);
	free(saved[fd]);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*saved[4096];
	ssize_t		boundary;
	char		*buff;

	buff = 0;
	if (fd < 0 || fd >= 4096 || BUFFER_SIZE <= 0 || read(fd, buff, 0) == -1)
		return (0);
	if (!saved[fd])
		saved[fd] = ft_strdup("");
	buff = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buff)
		return (0);
	boundary = BUFFER_SIZE;
	return (get_line(fd, saved, boundary, buff));
}
