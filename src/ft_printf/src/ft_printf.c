/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 15:23:08 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/28 09:06:11 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		prf_fill_buffer(const char *format)
{
	while (format[I] && format[I] != '%' && format[I] != '{'
	&& J != SIZE_BUF)
	{
		prf_fill_c(format[I++]);
	}
	if (format[I] == '{')
	{
		prf_color(format);
		prf_fill_buffer(format);
	}
	if (format[I] == '%')
		return (1);
	return (0);
}

int		ft_printf(const char *format, ...)
{
	prf_bzero(&ARG, sizeof(t_arg));
	prf_bzero(&FORM, sizeof(t_form));
	if (!prf_fill_buffer(format))
		return (write(1, BUFFER, J) ? RET + J : RET + J);
	va_start(AP, format);
	while (prf_parsing(format) > 0)
	{
		prf_conversion();
		prf_bzero(&ARG, sizeof(t_arg));
		if (RET == -1 || !prf_fill_buffer(format))
			break ;
	}
	RET != -1 ? (RET += J) && write(1, BUFFER, J) : write(1, BUFFER, J);
	return (RET);
}
