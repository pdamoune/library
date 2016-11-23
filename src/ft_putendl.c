/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 17:16:21 by pdamoune          #+#    #+#             */
/*   Updated: 2016/11/20 04:49:28 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Affiche la chaine s sur la sortie standard suivi d’un ’\n’.
*/

void	ft_putendl(const char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}
