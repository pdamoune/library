/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 15:23:08 by pdamoune          #+#    #+#             */
/*   Updated: 2018/03/08 17:07:49 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int			ft_vdprintf(int fd, const char *format, va_list ap)
{
	va_copy(AP, ap);
	prf_bzero(&ARG, sizeof(t_arg));
	prf_bzero(&FORM, sizeof(t_form));
	FD = fd;
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
