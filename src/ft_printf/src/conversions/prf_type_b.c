/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_type_b.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 02:54:26 by philippe          #+#    #+#             */
/*   Updated: 2017/05/06 04:24:56 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"
#include "../../../../include/libft.h"

void	prf_set_flag_b(void)
{
	FLAG_PLUS ? FLAG |= BIN_SP : 0;
	FLAG_SPACE ? FLAG |= BIN_HGT : 0;
	FLAG &= THREE_FLAG;
	FLAG |= BINARY;
	FLAG |= ZERO;
	FLAG &= ~SPACE;
	!FLAG_PRECISION ? WIDTH = 32 : 0;
	!PRECISION ? PRECI = WIDTH : 0;
	FLAG_PRECISION ? WIDTH = PRECI : 0;
	FLAG_HASHTAG ? WIDTH += 2 : 0;
}

void	prf_type_b(void)
{
	t_data	data;
	char	str[130];
	char	*s;
	int		len;

	prf_bzero(str, 130);
	s = str;
	prf_set_arg(&data, 'u');
	prf__ulltoa_base(s, data._ui, 2);
	len = prf_strlen(s);
	WIDTH < len && WIDTH ? WIDTH = len : 0;
	prf_set_flag_b();
	prf_set_padding(&s, len);
	prf_fill_data(&s, len);
}
