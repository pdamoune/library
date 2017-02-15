/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 19:03:14 by pdamoune          #+#    #+#             */
/*   Updated: 2017/02/15 14:24:33 by philippedamoune  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** Copy the ptr's content to the string *tmp. free the old pointer realloc the
** new len size to ptr. copy the old content into the new ptr.
*/

void	ft_memrealloc(void **ptr, int len)
{
	void	*tmp;

	tmp = ft_memalloc(len);
	ft_memccpy(tmp, *ptr, 0, len);
	ft_memdel(ptr);
	if (!(*ptr = ft_memalloc(len)))
		*ptr = NULL;
	else
		ft_memcpy(*ptr, tmp, len);
	ft_memdel(&tmp);
}
