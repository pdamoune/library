/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 20:43:40 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/27 11:25:18 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/get_next_line.h"
#include "../../algo/filler/1/include/filler.h"

t_list		*ft_setlst(int fd)
{
	t_struct	file;

	file.fd = fd;
	ft_bzero(file.buf, BUF_SIZE + 1);
	return (ft_lstnew(&file, sizeof(t_struct)));
}

int			cmp(t_struct *struc, int *fd)
{
	return (struc->fd - *fd);
}

int			ft_gnl(char *next_line, char *buf, char **line)
{
	char	tmp[BUF_SIZE + 1];
	int		i;
	int		j;

	i = 0;
	j = 0;
	ft_strcpy(tmp, buf);
	while (line[0][i])
		i++;
	if (*line && ft_strchr(buf, '\n') - buf < 0)
		*line = ft_memrealloc(*line, ft_strlen(*line) + 1, i + BUF_SIZE);
	else
		*line = ft_memrealloc(*line, ft_strlen(*line), ft_strchr(buf, '\n')
		- buf + i);
	// dprintf(g_fd2, "\ni = %d\n\n", i);

	while (buf[j] != '\n' && buf[j] != '\0')
	{
		(*line)[i++] = buf[j++];
		// dprintf(g_fd2, "%s\n", *line);
	}
	(*line)[i] = 0;
	// dprintf(g_fd2, "i = %s\n", *line);
	// dprintf(g_fd, "i = %s\n", *line);

	// dprintf(g_fd, "i %d\nj %d\n", i, j);
	// dprintf(g_fd, "%s %d\n", *line, line[0][10]);
	// dprintf(g_fd, "%s\n", *line);



	if (buf[j] == '\n' && ft_strcpy(next_line, &tmp[j + 1]))
		return (1);
	ft_bzero(next_line, BUF_SIZE + 1);
	return (0);
}

void		del(void *tmp, size_t size)
{
	ft_bzero(tmp, size);
	free((t_struct *)tmp);
}

int			get_next_line(const int fd, char **line)
{
	static t_list	*list = NULL;
	char			*buf;
	int				i;

	if (fd < 0 || !line || !(*line = ft_memalloc(BUF_SIZE + 1)))
		return (-1);
	if (!list)
		list = ft_setlst(fd);
	if (!(ft_lstfind(list, (void *)&fd, &cmp)))
		ft_lstadd(&list, ft_setlst(fd));
	buf = (((t_struct *)ft_lstfind(list, (void *)&fd, &cmp)->content)->buf);
	if (buf[0] && ft_gnl(buf, buf, line))
		return (1);
	while ((i = read(fd, buf, BUF_SIZE)))
	{
		if (i < 0)
			return (-1);
		buf[i] = 0;
		if (ft_gnl(buf, buf, line))
			return (1);
	}

	if (line[0][0])
		return (1);
	ft_lstdelone(&list, &del);
	return (0);
}
