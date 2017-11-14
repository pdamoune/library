# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdamoune <pdamoune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/05 18:34:34 by pdamoune          #+#    #+#              #
#    Updated: 2017/11/14 06:40:03 by pdamoune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
# **************************************************************************** #

NAME	=	libft.a
SOURCES	=	array/ft_sort_params.c \
			cliopts_get.c \
			cliopts_getmap.c \
			conversion/ft_atoi.c \
			conversion/ft_atol.c \
			conversion/ft_conv_bin.c \
			conversion/ft_itoa.c \
			conversion/ft_lltoa_base.c \
			conversion/ft_tolower.c \
			conversion/ft_toupper.c \
			conversion/ft_ulltoa_base.c \
			display/ft_displaytab.c \
			display/ft_putaddr.c \
			display/ft_putbin_base.c \
			display/ft_putchar.c \
			display/ft_putchar_fd.c \
			display/ft_putendl.c \
			display/ft_putendl_fd.c \
			display/ft_putfloat_bin.c \
			display/ft_putnbr.c \
			display/ft_putnbr_bin.c \
			display/ft_putnbr_fd.c \
			display/ft_putnbrel.c \
			display/ft_putstr.c \
			display/ft_putstr_fd.c \
			free/ft_strdel.c \
			free/ft_tabdel.c \
			ft_error.c \
			ft_printf/conversions/prf_type_b.c \
			ft_printf/conversions/prf_type_c.c \
			ft_printf/conversions/prf_type_d.c \
			ft_printf/conversions/prf_type_o.c \
			ft_printf/conversions/prf_type_s.c \
			ft_printf/conversions/prf_type_u.c \
			ft_printf/conversions/prf_type_uc.c \
			ft_printf/conversions/prf_type_us.c \
			ft_printf/conversions/prf_type_x.c \
			ft_printf/do_printf.c \
			ft_printf/ft_printf.c \
			ft_printf/functions/prf__ulltoa_base.c \
			ft_printf/functions/prf_atoi.c \
			ft_printf/functions/prf_bzero.c \
			ft_printf/functions/prf_color.c \
			ft_printf/functions/prf_fill_c.c \
			ft_printf/functions/prf_fill_data.c \
			ft_printf/functions/prf_fill_wchar.c \
			ft_printf/functions/prf_isblank.c \
			ft_printf/functions/prf_isdigit.c \
			ft_printf/functions/prf_isspace.c \
			ft_printf/functions/prf_lltoa_base.c \
			ft_printf/functions/prf_set_arg.c \
			ft_printf/functions/prf_set_precision.c \
			ft_printf/functions/prf_set_prefixe.c \
			ft_printf/functions/prf_set_x.c \
			ft_printf/functions/prf_strlen.c \
			ft_printf/functions/prf_strlen_wchar.c \
			ft_printf/functions/prf_strncmp.c \
			ft_printf/functions/prf_strncpy.c \
			ft_printf/functions/prf_strrev.c \
			ft_printf/functions/prf_strtoupper.c \
			ft_printf/functions/prf_toupper.c \
			ft_printf/functions/prf_ulltoa_base.c \
			ft_printf/functions/prf_wctoa.c \
			ft_printf/prf_conversion.c \
			ft_printf/prf_parsing.c \
			ft_printf/prf_set_padding.c \
			get_next_line.c \
			integer/ft_isalnum.c \
			integer/ft_isalpha.c \
			integer/ft_isascii.c \
			integer/ft_isblank.c \
			integer/ft_isdigit.c \
			integer/ft_isint.c \
			integer/ft_islower.c \
			integer/ft_isprint.c \
			integer/ft_isspace.c \
			integer/ft_isupper.c \
			integer/ft_isxdigit.c \
			integer/ft_sqrt.c \
			integer/ft_sqrt_min.c \
			integer/ft_swap.c \
			memory/ft_bzero.c \
			memory/ft_memalloc.c \
			memory/ft_memccpy.c \
			memory/ft_memchr.c \
			memory/ft_memcmp.c \
			memory/ft_memcpy.c \
			memory/ft_memdel.c \
			memory/ft_memmove.c \
			memory/ft_memrealloc.c \
			memory/ft_memset.c \
			string/ft_count_c_words.c \
			string/ft_count_occur.c \
			string/ft_strcat.c \
			string/ft_strchr.c \
			string/ft_strclr.c \
			string/ft_strcmp.c \
			string/ft_strcpy.c \
			string/ft_strcsplit.c \
			string/ft_strcstr.c \
			string/ft_strctrim.c \
			string/ft_strdift.c \
			string/ft_strdup.c \
			string/ft_strequ.c \
			string/ft_striter.c \
			string/ft_striteri.c \
			string/ft_strjoin.c \
			string/ft_strlcat.c \
			string/ft_strlen.c \
			string/ft_strmap.c \
			string/ft_strmapi.c \
			string/ft_strncat.c \
			string/ft_strncmp.c \
			string/ft_strncpy.c \
			string/ft_strnequ.c \
			string/ft_strnew.c \
			string/ft_strnstr.c \
			string/ft_strrchr.c \
			string/ft_strrev.c \
			string/ft_strsplit.c \
			string/ft_strstr.c \
			string/ft_strsub.c \
			string/ft_strtoupper.c \
			string/ft_strtrim.c \
			string/ft_tablen.c \
			t_list/ft_lstadd.c \
			t_list/ft_lstadd_first.c \
			t_list/ft_lstadd_last.c \
			t_list/ft_lstclr_first.c \
			t_list/ft_lstclr_last.c \
			t_list/ft_lstcpy.c \
			t_list/ft_lstdel.c \
			t_list/ft_lstdelone.c \
			t_list/ft_lstdisp_int.c \
			t_list/ft_lstdisp_str.c \
			t_list/ft_lstdup.c \
			t_list/ft_lstfind.c \
			t_list/ft_lstfirst.c \
			t_list/ft_lstforeach.c \
			t_list/ft_lstiter.c \
			t_list/ft_lstlast.c \
			t_list/ft_lstlen.c \
			t_list/ft_lstmap.c \
			t_list/ft_lstnew.c \
			t_list/ft_lstptr.c \
			t_list/ft_lstptrdel.c \
			t_list/ft_lstsort_len.c \
			t_list/ft_lstswap_content.c

CFLAGS	=	-Wall -Wextra -Werror
DEBUG	=	-g3

CC		=	gcc

PATHSRC =	srcs
PATHINC	=	includes
PATHOBJ	=	objs

INCLUDE =	-I $(PATHINC)

OBJETS	=	$(patsubst %.c,$(PATHOBJ)/%.o,$(SOURCES))

all:
		@make -j $(NAME)

$(PATHOBJ) :
		@mkdir -p $(PATHOBJ)
		@mkdir -p $(dir $(OBJETS))

$(PATHOBJ)/%.o: $(PATHSRC)/%.c Makefile | $(PATHOBJ)
		@printf "\r\033[1;32m. Compiling .\033[0m\033[K \033[1;31m$<"
		@$(CC) $(CFLAGS) -I $(PATHINC) -MMD -c $< -o $@

$(NAME): $(OBJETS) $(PATHOBJ)
		@printf "\r\e[2K\e[1;36m[${NAME}]\e[1;32m Done\e[0m\n"
		@ar rc $(NAME) $(OBJETS)
		@ranlib $(NAME)

files:
		$(shell find srcs | grep "\.c" | cut -c6- | sed  's/\.c/\.c \\/' > files)

clean:
		@rm -rf $(PATHOBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all

-include $(OBJETS:.o=.d)

.PHONY: clean, fclean, re, all
