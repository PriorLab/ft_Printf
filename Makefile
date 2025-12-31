# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alemigue <alemigue@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/31 12:10:00 by alemigue          #+#    #+#              #
#    Updated: 2025/12/31 12:22:00 by alemigue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    := libftprintf.a

CC      := cc
CFLAGS  := -Wall -Wextra -Werror
AR      := ar
ARFLAGS := rcs
RM      := rm -f

INC     := ft_printf.h

SRC     := ft_printf.c \
           print_char.c \
           print_hexa.c \
           print_num.c \
           print_pointer.c \
           print_string.c \
           print_unsig_num.c

OBJ     := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
