/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 18:39:22 by pdamoune          #+#    #+#             */
/*   Updated: 2017/07/10 14:29:20 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_error.h"

/*
** int args = nombre d arguments en plus des 3 de base.
** ... = file, function, line
** ... =
*/

int		ft_error(int args, ...)
{
	va_list		ap;
	void 		(*f)(int);
	int			err;

	va_start(ap, args);
	err = va_arg(ap, int);
	ft_printf("%@\n=====================================================\n", 2);
	ft_printf("%@|{red}ERROR :{eoc}\n", 2);
	ft_printf("%@|{mag}   File{eoc}     : %s\n", 2, va_arg(ap, char *));
	ft_printf("%@|{cya}   Function{eoc} : %s\n", 2, va_arg(ap, char *));
	ft_printf("%@|{yel}   Line{eoc}     : %d\n", 2, va_arg(ap, int));
	ft_printf("%@=====================================================\n\n", 2);

	while (args--)
	{
		ft_printf("{red}erreur :{eoc}\n");
		ft_printf("%5c%s\n", 0, va_arg(ap, char *));
	}
	f = va_arg(ap, void *);
	f(err);
	va_end(ap);
	return (-1);
}
