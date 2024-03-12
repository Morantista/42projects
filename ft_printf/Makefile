# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cballet <cballet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 14:50:04 by cballet           #+#    #+#              #
#    Updated: 2023/12/07 18:50:12 by cballet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = ./libft

SRCS = ft_printf.c ft_print_int.c ft_print_char.c ft_print_str.c ft_print_uns.c ft_print_ptr.c ft_print_hexlow.c ft_print_percent.c ft_print_hexup.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}
makelibft:
	@make bonus -C ${LIBFTDIR}
	@cp ${LIBFTDIR}/${LIBFTNAME} .
	@mv ${LIBFTNAME} ${NAME}

${NAME}: makelibft ${OBJS}
	@ar -r ${NAME} ${OBJS}

clean:
	@rm -f ${OBJS}
	@cd ${LIBFTDIR} && make clean

fclean: clean;
	@rm -f ${NAME}
	@cd ${LIBFTDIR} && make fclean

re: fclean all



