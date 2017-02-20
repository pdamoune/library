/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 09:33:59 by pdamoune          #+#    #+#             */
/*   Updated: 2017/02/20 07:12:27 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
** Compares at most the first n bytes of str1 and str2
*/

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (((unsigned char)str1[i] == (unsigned char)str2[i])
	&& str1[i] && str2[i] && i < n)
		i++;
	if (i == n)
		return ((unsigned char)str1[i - 1] - (unsigned char)str2[i - 1]);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
