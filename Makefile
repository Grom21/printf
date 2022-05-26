# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: etisha <etisha@student.21-school.>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 15:59:40 by etisha            #+#    #+#              #
#    Updated: 2021/11/19 15:59:44 by etisha           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC_FILES = ft_printf.c ft_flags_pxX.c ft_flags_sdiu.c

OBJ = $(patsubst %.c, %.o, $(SRC_FILES))

LIBC = ar rc

HEADER = ft_printf.h

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $?

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
