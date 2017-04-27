/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 19:03:14 by pdamoune          #+#    #+#             */
/*   Updated: 2017/04/27 11:07:45 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include "../../algo/filler/1/include/filler.h"
#include <stdio.h>

/*
** Copy the ptr's content to the string *tmp. free the old pointer realloc the
** new len size to ptr. copy the old content into the new ptr.
*/

void	*ft_memrealloc(void *ptr, size_t old_size, size_t new_size)
{
	void	*tmp;

	// dprintf(g_fd2, "o = %d\nn = %d\n", old_size, new_size);
	// dprintf(g_fd2, "apres = \n");

	if (old_size >= new_size)
		return (ptr);
	if (!(tmp = ft_memalloc(new_size)))
		return (NULL);
	if (old_size)
		ft_memcpy(tmp, ptr, old_size);

	ft_memdel(&ptr);
	return ((void *)tmp);
}
