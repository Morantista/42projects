# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cballet <cballet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/14 12:22:22 by cballet           #+#    #+#              #
#    Updated: 2024/04/17 21:16:56 by cballet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
FLAG = -Wall -Werror -Wextra -g3

LIBFT = ./libft/libft.a
LIBFTDIR = ./libft

MLX_FILE	=	libmlx.a
MLX_FLAG	=	-lX11 -lXext
MLX_PATH	=	./minilibx-linux/
MLX_LIB		=	$(addprefix $(MLX_PATH), $(MLX_FILE))
MLX_EX		=	$(MLX_LIB) $(MLX_FLAG)

C_FILE		= main.c is_error.c check_argv.c init_maps.c check_map.c check_map_utils.c set.c init_mlx.c init_sprites.c check_header.c set_sprites.c  utils.c move.c move_enemy_utils.c move_player_utils.c move_print.c end_game.c set_index.c move_enemies.c move_enemy2_utils.c
SRC_DIR		=	./src/
INC_DIR		=	./include/
SRC			=	$(addprefix $(SRC_DIR),$(C_FILE))

OBJ			=	$(SRC:.c=.o)

.c.o:
	$(CC) $(FLAG) -c $< -o $@

all: $(NAME)

mlx:
	make -sC $(MLX_PATH)

$(LIBFT):
	make bonus -C (LIBFTDIR)

$(NAME): mlx $(OBJ) $(LIBFT)
	$(CC) $(OBJ) $(LIBFT) $(MLX_EX) $(FLAG) -o $(NAME)

$(LIBFT):
	make bonus -C $(LIBFTDIR)

clean:
	make clean -sC $(MLX_PATH)
	make clean -C $(LIBFTDIR)
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFTDIR)

re: fclean all

.PHONY: all clean fclean re