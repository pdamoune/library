/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdisp_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:51:11 by pdamoune          #+#    #+#             */
/*   Updated: 2017/10/30 14:56:46 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdisp_str(t_list *list)
{
	while (list->prev)
	{
		list = list->prev;
	}
	while (list)
	{
		ft_printf("%s\n", list->content);
		list = list->next;
	}
}
