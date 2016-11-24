/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstprev.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 04:17:58 by pdamoune          #+#    #+#             */
/*   Updated: 2016/11/24 07:56:41 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Ajoute l’élément new a la fin de la liste.
*/

void	ft_lstprev(t_list *first, t_list *new)
{
	t_list	*tmp;

	tmp = first;
	if(!first)
	{
		first = new;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
