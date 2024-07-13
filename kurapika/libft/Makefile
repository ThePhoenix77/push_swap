# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tboussad <tboussad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 13:34:56 by tboussad          #+#    #+#              #
#    Updated: 2024/07/09 11:06:13 by tboussad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cmd = cc
flags = -Wall -Werror -Wextra
sources =  ft_strlen2.c ft_strjoin2.c ft_strchr2.c  get_next_line.c ft_bzero.c ft_isalpha.c ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strlen.c ft_substr.c ft_strtrim.c ft_itoa.c ft_striteri.c ft_putstr_fd.c ft_putnbr_fd.c\
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_strjoin.c ft_strmapi.c ft_putchar_fd.c ft_putendl_fd.c ft_split.c
objs = $(sources:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(objs)
	ar -rc $(NAME) $(objs)

%.o:%.c libft.h
	$(cmd) $(flags) -c $< -o $@ 

clean:
	rm -rf $(objs)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all bonus clean fclean re
