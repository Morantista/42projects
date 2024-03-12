# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cballet <cballet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 17:56:53 by cballet           #+#    #+#              #
#    Updated: 2023/11/24 12:23:29 by cballet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
PART1 = ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_memcpy.c ft_memset.c ft_strlen.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c 
PART2 = ft_substr.c ft_strdup.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c \
ft_putnbr_fd.c ft_split.c
BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
SRCS = ${PART1} ${PART2}

SRCSALL = ${PART1} ${PART2} ${BONUS}

OBJS = ${SRCS:.c=.o}

OBJSALL = ${SRCSALL:.c=.o}
.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIB}: ${OBJS}
	ar -rsc ${LIB} ${OBJS}

bonus : ${OBJSALL}
	ar -rsc ${LIB} ${OBJSALL}

all: ${LIB}

clean:
	rm -f ${OBJSALL}

fclean: clean;
	rm -f ${LIB}
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCSALL)
	gcc -nostartfiles -shared -o libft.so $(OBJSALL)

re: fclean all bonus

.PHONY: all clean fclean re bonus so