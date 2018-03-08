/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:19:21 by pdamoune          #+#    #+#             */
/*   Updated: 2018/03/08 17:08:10 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

/*
** To use the %b conversion, reffer to the file prf_type_b.c
** To print color, reffer to the file prf_color.c
** For the rest, reffer to the printf man 3.
*/

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

int		do_printf(const char *format)
{
	if (!prf_fill_buffer(format))
		return (write(FD, BUFFER, J) ? RET + J : RET + J);
	while (prf_parsing(format) > 0)
	{
		prf_conversion();
		prf_bzero(&ARG, sizeof(t_arg));
		if (RET == -1 || !prf_fill_buffer(format))
			break ;
	}
	RET != -1 ? (RET += J) && write(FD, BUFFER, J) : write(2, BUFFER, J);
	return (RET);
}
