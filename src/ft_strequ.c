/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 16:52:24 by pdamoune          #+#    #+#             */
/*   Updated: 2016/11/15 21:49:26 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Compare lexicographiquement s1 et s2. Si les deux chaines
** sont égales, la fonction retourne 1, ou 0 sinon
*/

int	ft_strequ(const char *str1, const char *str2)
{
	if (str1 && str2)
		if (ft_strcmp(str1, str2) == 0)
			return (1);
	return (0);
}
