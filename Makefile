# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eblondee <eblondee@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/18 10:29:05 by eblondee          #+#    #+#              #
#    Updated: 2022/07/26 14:56:38 by eblondee         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	./main.c \
		./ft_create_lstdc.c \
		./ft_free_lstdc.c \
		./ft_add_lstdc.c \
		./ft_index_lstdc.c \
		./ft_move_in_lstdc.c \
		./ft_print_lstdc.c \
		./ft_get_lstdc.c \
		./ft_move_elem_lstdc.c \
		./ft_merge_lstdc.c \
		./ft_int_lstdc.c \
		./ft_str_lstdc.c \
		./ft_char_lstdc.c \
		./ft_anything_to_void.c \
		./ft_void_to_anything.c \

OBJS = ${SRCS:.c=.o}

NAME = test

CC = gcc

RM = rm -rf

DIR_LIB = ./libft/

LIB = libft.a

CFLAGS = -Wall -Wextra -Werror -g

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

$(NAME):	${OBJS}
	make -C ${DIR_LIB} ${LIB}
	${CC} ${CFLAGS} ${OBJS} ${DIR_LIB}${LIB} -o ${NAME}

clean:
	@make -sC ${DIR_LIB} clean
	@${RM} ${OBJS}
	@printf "All object were cleaned\n"

fclean: clean
	@${RM} ${DIR_LIB}${LIB}
	@${RM} ${NAME}
	@printf "All exectutable were cleaned\n"

re: fclean all

.PHONY: all clean fclean re
