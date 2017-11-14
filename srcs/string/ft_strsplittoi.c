/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplittoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 04:57:45 by pdamoune          #+#    #+#             */
/*   Updated: 2017/11/14 10:47:44 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		*ft_strsplittoi(char *str, int size)
{
	int		*tab;
	int		i;

	if (!(tab = ft_memalloc(sizeof(int) * size)))
		return (0);
	i = ft_strlen(str);
	while (--i >= 0)
	{
		if (ft_isspace(str[i]))
			continue ;
		str[i + 1] = 0;
		while (i && ft_isdigit(str[i]))
			i--;
		if (str[i] == '-' || str[i] == '+')
			if (i)
				i--;
		if (!ft_isint(&str[i]))
			return (NULL);
		tab[--size] = ft_atoi(&str[i]);
		str[i] = 0;
	}
	return (tab);
}
