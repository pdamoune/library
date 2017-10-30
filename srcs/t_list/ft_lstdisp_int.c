/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisp_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:51:11 by pdamoune          #+#    #+#             */
/*   Updated: 2017/10/30 14:56:29 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdisp_int(t_list *list)
{
	while (list->prev)
	{
		list = list->prev;
	}
	while (list)
	{
		ft_printf("%d\n", list->content);
		list = list->next;
	}
}
