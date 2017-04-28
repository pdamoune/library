/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prf_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: philippe <philippe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/25 03:45:56 by philippe          #+#    #+#             */
/*   Updated: 2017/04/28 09:03:25 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/prf_color.h"

t_color g_colors[] =
{
	{"{eoa}", ALL_DEFAULT},
	{"{EOA}", ALL_DEFAULT},
	{"{bol}", T_BOLD},
	{"{ita}", T_ITALIC},
	{"{und}", T_UNDERLINED},
	{"{inv}", T_INVERTED},
	{"{bla}", C_BLACK},
	{"{gry}", C_GREY},
	{"{red}", C_RED},
	{"{gre}", C_GREEN},
	{"{yel}", C_YELLOW},
	{"{blu}", C_BLUE},
	{"{mag}", C_MAGENTA},
	{"{cya}", C_CYAN},
	{"{whi}", C_WHITE},
	{"{eoc}", C_DEFAULT},
	{"{BLA}", BG_BLACK},
	{"{RED}", BG_RED},
	{"{GRE}", BG_GREEN},
	{"{YEL}", BG_YELLOW},
	{"{BLU}", BG_BLUE},
	{"{MAG}", BG_MAGENTA},
	{"{CYA}", BG_CYAN},
	{"{WHI}", BG_WHITE},
	{"{EOC}", BG_DEFAULT},
	{"", ""},
};

void	prf_color(const char *format)
{
	int i;
	int j;

	i = -1;
	j = 0;
	while (g_colors[++i].flag_c[0])
		if (!prf_strncmp(&format[I], g_colors[i].flag_c, 5))
		{
			while (g_colors[i].code_c[j - 1] != 'm')
			{
				BUFFER[J++] = g_colors[i].code_c[j++];
				I++;
			}
			if (j == 4)
				I++;
			if (format[I] == '{' && g_colors[i].code_c[0])
				prf_color(format);
			break ;
		}
	if (format[I] == '{' && !g_colors[i].code_c[0])
		prf_fill_c(format[I++]);
}
