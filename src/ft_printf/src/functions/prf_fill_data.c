/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_fill_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/29 16:24:04 by pdamoune          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/08/10 21:53:29 by philippedamoune  ###   ########.fr       */
=======
/*   Updated: 2017/08/11 12:02:15 by pdamoune         ###   ########.fr       */
>>>>>>> 0f011f66c15e341ceada60b4e3b6ccdcb0e1526c
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

void	prf_fill_data(char **data, int len)
{
<<<<<<< HEAD
	int i;

	i = I;
=======
	int	i;

>>>>>>> 0f011f66c15e341ceada60b4e3b6ccdcb0e1526c
	if (!*data)
		return ;
	while (**data && **data != '{' && len--)
		prf_fill_c(*(*data)++);
	if (**data == '{')
	{
<<<<<<< HEAD
		I = 0;
		prf_color(*data);
		*data = &data[0][5];
		I = i;
		prf_fill_data(data, len - 5);
=======
		i = I;
		I = 0;
		prf_color(*data);
		I = i;
		*data += 5;
		prf_fill_data(data, len - 4);
>>>>>>> 0f011f66c15e341ceada60b4e3b6ccdcb0e1526c
	}
	*data = NULL;
}
