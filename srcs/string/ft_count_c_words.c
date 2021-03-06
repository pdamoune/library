/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_c_words.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:57:04 by pdamoune          #+#    #+#             */
/*   Updated: 2017/11/14 08:30:27 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** Permet de compter le nombre de mots dans str, avec comme separateur c.
*/

int		ft_count_c_words(const char *str, char c)
{
	int		words;
	int		i;

	i = 0;
	words = 0;
	if (!str)
		return (words);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (words);
}
