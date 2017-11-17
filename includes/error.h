/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 18:40:48 by pdamoune          #+#    #+#             */
/*   Updated: 2017/11/17 12:00:17 by pdamoune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H
# include <errno.h>
# include <string.h>
# include <stdarg.h>
# include <stdlib.h>

# define INFO			__FILE__, __FUNCTION__, __LINE__
# define ERR(n, ...)	ft_error(n, INFO, ##__VA_ARGS__)

# define MSG_ERROR		-1

# define E_UNKNOWN		0

# define E_CO_INV		1
# define E_CO_INVL		2
# define E_CO_MISS		3
# define E_CO_MISSL		4
# define E_CO_ARG_INV	5
# define E_CO_ARG_INVL	6

# define E_SYS_NO_FILE	7
# define E_SYS_IS_DIR	8
# define E_SYS_NO_PERM	9
# define E_MALLOC		10
# define E_OPEN			11
# define E_CUSTOM_ERR	12

# define E_INV_FILE		13
# define E_INV_LINE		14
# define E_EMP_LINE		15

# define E_MLX_INIT		16
# define E_MLX_WIN		17
# define E_MLX_IMG		18
# define E_MLX_PXL		19

int		ft_error(int err, ...);

#endif
