/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 23:14:25 by pdamoune          #+#    #+#             */
/*   Updated: 2017/06/09 23:43:38 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstclr_last(t_list *lst)
{
	if (lst->next)
	{
		while (lst->next->next)
		{
			lst = lst->next;
		}
		lst->next->content = NULL;
		free(lst->next);
		lst->next = NULL;
	}
}
