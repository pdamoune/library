/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 07:14:41 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/14 07:42:00 by pdamoune         ###   ########.fr       */
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
		(1 << i) & n ? ft_putchar ('1') : ft_putchar('0');
}
