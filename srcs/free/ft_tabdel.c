/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 15:49:08 by philippe          #+#    #+#             */
/*   Updated: 2017/11/14 11:28:50 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_tabdel(void **tab, int size)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (i < size)
		ft_memdel(&tab[i++]);
	free(tab);
}
