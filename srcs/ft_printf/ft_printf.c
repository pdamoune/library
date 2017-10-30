/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 15:23:08 by pdamoune          #+#    #+#             */
/*   Updated: 2017/10/30 17:18:13 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_vdprintf(int fd, const char *format, va_list ap)
{
	FD = fd;
	va_copy(AP, ap);
	return (do_printf(format));
}

int			ft_dprintf(int fd, const char *format, ...)
{
	va_start(AP, format);
	return (ft_vdprintf(fd, format, AP));
}

int			ft_printf(const char *format, ...)
{
	va_start(AP, format);
	return (ft_vdprintf(1, format, AP));
}
