# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clementballet <clementballet@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 11:00:32 by clementball       #+#    #+#              #
#    Updated: 2024/05/18 15:49:50 by clementball      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk
NAMECLI = client
NAMESERV = server
NAMELIB = client_bonus
NAMESERVB = server_bonus
CC = cc
FLAGS = -Wall -Wextra -Werror -g3
SRC_PATH = src/
OBJ_PATH = obj/

SRCCLIE_FILES = client.c
SRCSERV_FILES = server.c
SRCCLIEB_FILES = client_bonus.c
SRCSERVB_FILES = server_bonus.c

SRCCLIE = $(addprefix $(SRC_PATH), $(SRCCLIE_FILES))
OBJCLIE = $(SRCCLIE_FILES:.c=.o) 

SRCSERV = $(addprefix $(SRC_PATH), $(SRCSERV_FILES))
OBJSERV = $(SRCSERV_FILES:.c=.o) 

SRCCLIEB = $(addprefix $(SRC_PATH), $(SRCCLIEB_FILES))
OBJCLIEB = $(SRCCLIEB_FILES:.c=.o) 

SRCSERVB = $(addprefix $(SRC_PATH), $(SRCSERVB_FILES))
OBJSERVB = $(SRCSERVB_FILES:.c=.o) 

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