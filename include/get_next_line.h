/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 22:29:50 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/27 07:15:16 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUF_SIZE 50
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
