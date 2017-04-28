/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_fill_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fanie13 <fanie13@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 13:18:39 by fanie13           #+#    #+#             */
/*   Updated: 2017/04/28 09:03:14 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	prf_fill_c(int c)
{
	FLAG_BINARY && !(WIDTH % 8) ? BUFFER[J++] = ' ' : 0;
	BUFFER[J] = c;
	J++;
	WIDTH && WIDTH == PRECI ? PRECI-- : 0;
	WIDTH ? WIDTH-- : 0;
	if (J == SIZE_BUF)
	{
		RET += J;
		write(1, BUFFER, J);
		prf_bzero(BUFFER, SIZE_BUF);
		J = 0;
	}
}
