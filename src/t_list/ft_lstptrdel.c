/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstptrdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 10:50:32 by pdamoune          #+#    #+#             */
/*   Updated: 2017/08/03 16:21:44 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstptrdel(t_list **alst)
{
	t_list	*tmp;

	while ((tmp = (*alst)->next))
	{
		free(*alst);
		*alst = tmp;
	}
	ft_memdel((void *)&(*alst));
}
