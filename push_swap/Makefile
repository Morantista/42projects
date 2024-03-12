# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cballet <cballet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/20 10:57:32 by cballet           #+#    #+#              #
#    Updated: 2024/03/11 12:54:35 by cballet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror

SRC_PATH = src/
OBJ_PATH = obj/

SRC = is_error.c main.c ft_split.c utils_error.c utils_lst.c utils.c ft_push.c ft_reverse_rotate.c ft_rotate.c ft_swap.c finds.c combo_cmd.c sort.c

SRCS = $(addprefix $(SRC_PATH), $(SRC))
OBJ = $(SRC:.c=.o) 
OBJS = $(addprefix $(OBJ_PATH), $(OBJ))
HEAD = -I ./include/

all: $(OBJ_PATH) $(NAME)

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(OBJ_PATH)%.o : $(SRC_PATH)%.c 
	$(CC) $(FLAGS) -c $< -o $@ $(HEAD)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re : fclean all
