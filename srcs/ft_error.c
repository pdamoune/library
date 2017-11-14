/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 18:39:22 by pdamoune          #+#    #+#             */
/*   Updated: 2017/11/14 13:43:10 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** int args = nombre d arguments en plus des 3 de base.
** ... = file, function, line
** ... =
*/

char	*g_error[] =
{
	"Unknown error 0",
	"Invalid option -%c",
	"Invalid option --%s",
	"Option '%c': missing argument",
	"Option '%s': missing argument",
	"Option '%c': not a valid argument",
	"Option '%s': not a valid argument",
	"%s: no such file or directory",
	"%s: Is a directory",
	"%s: Permission denied",
	"Error: Memory allocation error",
	"%s: Failed to open file: %s",
	"%s: %s",
	"Parsing: invalid file = %s",
	"Parsing: invalid line = %s",
	"Parsing: empty line = %s",
	"Mlx error: mlx = %p",
	"Mlx error: win = %p",
	"Mlx error: img = %p",
};

int		ft_error(int err, ...)
{
	va_list		ap;
	int			fd;

	va_start(ap, err);
	fd = 2;
	ft_dprintf(fd, "\n===================================================\n");
	ft_dprintf(fd, "|{red}ERROR :{eoc}%43c|\n", 0);
	ft_dprintf(fd, "|{mag}   File{eoc}     : %-35s|\n", va_arg(ap, char *));
	ft_dprintf(fd, "|{cya}   Function{eoc} : %-35s|\n", va_arg(ap, char *));
	ft_dprintf(fd, "|{yel}   Line{eoc}     : %-35d|\n", va_arg(ap, int));
	ft_dprintf(fd, "===================================================\n");
	ft_dprintf(fd, "{red} erreur(s) :{eoc}\n%5c{bol}", 0);
	if (err >= 0)
		ft_vdprintf(fd, g_error[err], ap);
	ft_dprintf(fd, "{eoc}\n\n");
	va_end(ap);
	return (1);
}
