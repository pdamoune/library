/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 23:30:33 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/17 00:29:54 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_unsigned_itoa_base(unsigned long long n, int base)
{
	static char		result[20];
	static	int		len = 0;

	if (n >= base)
	{
		ft_unsigned_itoa_base(n / base, base);
		len++;
	}
	result[len] = n % base + '0';
	if (base == 16)
		if (!ft_isdigit((n % base) + '0'))
			result[len] += 39;
	return (result);
}
