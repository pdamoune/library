/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 19:03:14 by pdamoune          #+#    #+#             */
/*   Updated: 2017/03/20 18:37:27 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** Copy the ptr's content to the string *tmp. free the old pointer realloc the
** new len size to ptr. copy the old content into the new ptr.
*/

void	*ft_memrealloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*tmp;

	if (!(tmp = ft_memalloc(new_size + 1)))
		return (NULL);
	if (old_size)
		ft_memcpy(tmp, ptr, old_size + 1);
	ft_memdel(&ptr);
	return ((void *)tmp);
}
