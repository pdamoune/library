/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 18:24:55 by philippe          #+#    #+#             */
/*   Updated: 2017/07/13 02:02:51 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
** Ajoute l’élément new en fin de liste.
*/

void	ft_lstadd_last(t_list **alst, t_list *new_list)
{
	t_list	*tmp;

	if (!new_list)
		return ;
	if (!(*alst))
	{
		*alst = new_list;
		return ;
	}
	tmp = *alst;
	while (tmp->next)
		tmp = tmp->next;
	new_list->prev = tmp;
	tmp->next = new_list;
}
