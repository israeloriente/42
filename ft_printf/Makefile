# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: israeloriente <israeloriente@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 09:36:45 by israelorien       #+#    #+#              #
#    Updated: 2022/05/24 19:36:12 by israelorien      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libftprintf.a
SRC_FILES = main.c ft_printf.c
SRC_DIR = src/
OBJ_DIR	= obj/
CC = gcc
CFLAGS = -Wall -Werror -Wextra

SRC 		= 	$(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ 		= 	$(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o,$(SRC))

#################### RULES ####################
all: $(NAME) teste

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

teste: $(OBJ)
	$(CC) $(CFLAGS) -o teste $(OBJ)

#################### CLEAN ####################
clean:
	rm -Rf $(OBJ_DIR) teste

fclean: clean
	rm -rf $(NAME)
# Refazer
re: fclean all

#################### IGNORE ####################
.PHONY: all clean fclean re