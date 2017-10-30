/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 18:24:55 by philippe          #+#    #+#             */
/*   Updated: 2017/10/30 14:58:43 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Ajoute l’élément new en fin de liste.
*/

void	ft_lstadd_first(t_list **alst, t_list *new_list)
{
	t_list	*tmp;

	if (!(*alst))
	{
		*alst = new_list;
		return ;
	}
	tmp = *alst;
	while (tmp->prev)
		tmp = tmp->prev;
	tmp->prev = new_list;
	new_list->next = tmp;
}
