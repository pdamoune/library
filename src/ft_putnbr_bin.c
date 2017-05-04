/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 07:14:41 by pdamoune          #+#    #+#             */
/*   Updated: 2017/05/04 18:32:29 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** Affiche le nombre n en binaire.
*/

void	ft_putnbr_bin(int n, int base)
{
	while (--base >= 0)
	{
		(1 << base) & n ? ft_putchar ('1') : ft_putchar('0');
		if (base % 8 == 0)
			ft_putchar(' ');
	}
	// ft_putchar('\n');
	// ft_putchar('\n');
}
