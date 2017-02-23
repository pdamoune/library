/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 22:29:50 by pdamoune          #+#    #+#             */
/*   Updated: 2017/02/23 11:16:47 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUF_SIZE 32
# include "libft.h"
# include <fcntl.h>

typedef struct s_struct		t_struct;

struct		s_struct
{
	int		fd;
	char	buf[BUF_SIZE + 1];
};

int			get_next_line(const int fd, char **line);

#endif
