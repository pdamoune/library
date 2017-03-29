/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 07:14:41 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/29 09:35:47 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** Affiche le nombre n en binaire.
*/

void	ft_putnbr_bin(int n)
{
	int i;

	i = 32;
	while (--i >= 0)
	{
		(1 << i) & n ? ft_putchar ('1') : ft_putchar('0');
		if (i % 8 == 0)
			ft_putchar(' ');
	}
}
