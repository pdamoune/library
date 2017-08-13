/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_fill_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:24:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/08/12 21:24:45 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../include/ft_printf.h"

void	prf_fill_data(char **data, int len)
{
	int i;

	if (!*data)
		return ;
	while (**data && **data != '{' && len--)
		prf_fill_c(*(*data)++);
	if (**data == '{')
	{
		prf_color(*data);
		*data = &data[0][5];
		prf_fill_data(data, len - 5);
		i = I;
		I = 0;
		prf_color(*data);
		I = i;
		*data += 5;
		prf_fill_data(data, len - 4);
	}
	*data = NULL;
}
