# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cballet <cballet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 11:00:32 by clementball       #+#    #+#              #
#    Updated: 2024/05/28 17:54:08 by cballet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAMEC = client.exe
NAMESV = server.exe
NAMECB = client_bonus.exe
NAMESVB = server_bonus.exe
CC = gcc
FLAGS = -Wall -Wextra -Werror 
FSANITIZE	= -fsanitize=address -g3
HEADER = -I ./include

LIBFT = ./Libft/libft.a
LIBFTDIR = ./Libft

SRC_DIR = ./src/
SRC_BONUS_DIR = src_bonus/
OBJ_DIR = ./obj/
OBJ_BONUS_DIR = ./obj_bonus/

SRC_CLIENT = client utils
SRC_SERVER = server
SRC_CLIENTB =
SRC_SERVERB =

SRCCLI = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_CLIENT)))
OBJCLI = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_CLIENT)))

SRCSER = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_SERVER)))
OBJSER = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_SERVER)))

SRCCLIB = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_CLIENTB)))
OBJCLIB = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_CLIENTB)))

SRCSER = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_SERVERB)))
OBJSERB = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_SERVERB)))


mandatory: $(LIBFT) $(OBJ_DIR) $(NAMEC) $(NAMESV)

$(LIBFT):
	make bonus -C $(LIBFTDIR)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)
	
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@ 

$(NAMEC): $(OBJCLI) 
	$(CC) $(CFLAGS) $(OBJCLI) $(LIBFT) -o $(NAMEC)

$(NAMESV): $(OBJSER) 
	$(CC) $(CFLAGS) $(OBJSER) $(LIBFT) -o $(NAMESV)


bonus: $(LIBFT) $(OBJ_DIR) $(NAMECB) $(NAMESVB)

$(OBJ_BONUS_DIR):
	mkdir $(OBJ_DIR)

$(OBJ_BONUS_DIR)%.o: $(SRC_BONUS_DIR)%.c
	$(CC) $(CFLAGS) $(HEADER) -c $< -o $@ 

$(NAMECB): $(OBJCLIB) 
	$(CC) $(CFLAGS) $(OBJCLIB) $(LIBFT) -o $(NAMECB)

$(NAMESVB): $(OBJSERB) 
	$(CC) $(CFLAGS) $(OBJSERB) $(LIBFT) -o $(NAMESVB)

clean: 
	rm -rf $(OBJ_DIR) $(OBJ_BONUS_DIR)
	make clean -C $(LIBFTDIR)

fclean: clean
	rm -f $(NAMEC) $(NAMECB) $(NAMESV) $(NAMESVB)
	make fclean -C $(LIBFTDIR)

re: fclean mandatory bonus

.PHONY: clean fclean re bonus mandatory






