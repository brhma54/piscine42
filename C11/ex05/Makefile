# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ehamm <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 09:55:04 by ehamm             #+#    #+#              #
#    Updated: 2023/12/12 13:51:20 by ehamm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = ./srcs/ft_putnbr.c ./srcs/ft_putchar.c ./srcs/ft_atoi.c ./srcs/main.c
CC = gcc -Wall -Werror -Wextra
HEADERS = ./includes

all: $(NAME)

$(NAME):
	@$(CC) -o $(NAME) $(SRCS) -I $(HEADERS)

clean:
	@rm -rf $(NAME)

re: clean all

