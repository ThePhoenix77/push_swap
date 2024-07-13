# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/07 12:27:40 by tboussad          #+#    #+#              #
#    Updated: 2024/07/12 16:37:12 by tboussad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFTDIR = libft/libft.a
BONUS = bonus/checker
HEADER = includes/push_swap.h
SRC_DIR = src/

SRC_1 = src/push_swap/main.c \

SRC_2 =	src/push_swap/ft_algorithm.c \
		src/push_swap/ft_algorithm_utils.c \
		src/push_swap/ft_add_back.c \
		src/push_swap/ft_stack_new.c \
		src/push_swap/ft_check_utils.c \
		src/push_swap/case_utils_ab.c \
		src/push_swap/case_utils_ba.c \
		src/push_swap/ft_rotate_and_push.c \
		src/push_swap/ft_sort.c \
		src/push_swap/ft_sort_three.c \
		src/push_swap/ft_rotate_type.c \
		src/push_swap/operations.c \
		src/push_swap/operations2.c \
		src/push_swap/operations3.c \
		src/push_swap/ft_check_dup.c \
		src/push_swap/ft_check_sorted.c \
		src/push_swap/ft_error.c \
		src/push_swap/ft_free.c \
		src/push_swap/utils_lst.c \
		src/push_swap/utils_lst2.c \
		src/push_swap/ft_check_args.c \
		
BONUS_SRC = bonus/checker_bonus.c \
			bonus/checker_utils_bonus.c \
			

OBJ_1 = ${SRC_1:.c=.o}
OBJ_2 = ${SRC_2:.c=.o}

BONUS_OBJ =${BONUS_SRC:.c=.o_bonus}

INCLUDE = -Iincludes/

all: ${NAME}

${NAME}: $(LIBFTDIR) ${OBJ_1} ${OBJ_2}
	${CC} ${CFLAGS} ${INCLUDE} ${OBJ_1} ${OBJ_2} -Llibft -lft -o ${NAME}

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

%.o_bonus: %.c $(HEADER_BONUS)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

bonus: ${BONUS}

${BONUS}: $(LIBFTDIR) ${OBJ_2} ${BONUS_OBJ}
	${CC} ${CFLAGS} ${INCLUDE} ${BONUS_OBJ} ${OBJ_2} -Llibft -lft -o ${BONUS}

$(LIBFTDIR):
	make -C libft
clean:
	rm -rf ${OBJ_1} ${OBJ_2} ${BONUS_OBJ}
	make clean -C libft

fclean: clean
	rm -rf ${NAME}
	rm -rf ${BONUS}
	make fclean -C libft

re: clean all

.PHONY: all clean fclean re bonus
