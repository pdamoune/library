/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 02:54:26 by philippe          #+#    #+#             */
/*   Updated: 2017/04/28 09:04:04 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	prf_set_flag_b(void)
{
	FLAG &= THREE_FLAG;
	FLAG |= BINARY;
	FLAG |= ZERO;
	FLAG &= ~PRECISION;
	!WIDTH ? WIDTH = 32 : 0;
	PRECI = WIDTH;
	FLAG_HASHTAG ? WIDTH += 2 : 0;
}

void	prf_type_b(void)
{
	t_data	data;
	char	str[32];
	char	*s;
	int		len;

	prf_bzero(str, 32);
	s = str;
	prf_set_arg(&data, 'u');
	prf_ulltoa_base(s, data.ui, 2);
	len = prf_strlen(s);
	WIDTH < len && WIDTH ? WIDTH = len : 0;
	prf_set_flag_b();
	prf_set_padding(&s, len);
	prf_fill_data(&s, len);
}
