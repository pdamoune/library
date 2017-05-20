/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 11:18:30 by pdamoune          #+#    #+#             */
/*   Updated: 2017/05/20 01:53:36 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_isint(const char *nbr)
{
	int i;
	int	s;

	if (!nbr[0])
		return (0);
	i = (nbr[0] == '-' ? (s = 1)  : (s = 0));
	while (nbr[i])
	{
		if (!ft_isdigit(nbr[i]) || i > 9 + s)
			return (0);
		if (i == 9 + s)
		{
			if ((!s && ft_strcmp(nbr, "2147483647") > 0)
			|| (s && ft_strcmp(nbr, "-2147483648") > 0))
				return (0);
		}
		i++;
	}
	if (s)
		return (-1);
	return (1);
}
