# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: israeloriente <israeloriente@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 14:32:16 by ahel-mou          #+#    #+#              #
#    Updated: 2022/10/31 18:47:06 by israelorien      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_CLIENT = client
NAME_SERVER = server

CFLAGS = -Wall -Wextra -Werror

SRCS_CLIENT = client.c
# minitalk.h
SRCS_SERVER = server.c
# minitalk.h

CC = gcc

FLAGS = -Wall -Werror -Wextra

OBJS_CLIENT = $(SRCS:.c=.o)
OBJS_SERVER = $(SRCS:.c=.o)


all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT) : $(OBJS_CLIENT)
	$(CC) $(CFLAGS) $(SRCS_CLIENT) -o $(NAME_CLIENT)
# @ar -rcs $(NAME_CLIENT) $(OBJS_CLIENT)
$(NAME_SERVER) : $(OBJS_SERVER)
	$(CC) $(CFLAGS) $(SRCS_SERVER) -o $(NAME_SERVER)
# -rcs $(NAME_SERVER) $(OBJS_SERVER)
	
exec: all
	./server

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: clean, fclean, all, re, server, client
