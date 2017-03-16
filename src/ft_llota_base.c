/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llota_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 23:30:35 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/17 00:28:02 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_signed_itoa_base(long long n, int base)
{
	static char		result[20];
	static	int		len = 0;

	if (n <= -base || n >= base)
	{
		ft_signed_itoa_base(n / base, base);
		len++;
	}
	if (n > 0)
		result[len] = (n % base) + '0';
	else
	{
		result[0] = '-';
		result[len + 1] = -(n % base) + '0';
	}
	if (base == 16)
		if (!ft_isdigit((n % base) + '0'))
			result[len] += 39;
	return (result);
}
