# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: israeloriente <israeloriente@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 14:32:16 by ahel-mou          #+#    #+#              #
#    Updated: 2022/10/30 17:28:46 by israelorien      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Minitalk.a

FLAGS = -Wall -Wextra -Werror

SRCS = client.c server.c

CC = gcc

FLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

all: $(NAME) client server

$(NAME) : $(OBJS)
	@$(CC) -c $(CFLAGS) $(SRCS)
	@ar -rcs $(NAME) $(OBJS)

clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME)

re: fclean all

server:
	gcc server.c $(SRCS) -o server
	@clear
	@./server

client:
	gcc client.c $(SRCS) -o client
	@clear

.PHONY: clean, fclean, all, re, server, client
