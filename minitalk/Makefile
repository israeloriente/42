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
NAME_DEBUG = debug

CFLAGS = -Wall -Wextra -Werror

SRCS_CLIENT = client.c lib/libft.c
SRCS_SERVER = server.c lib/libft.c
SRCS_DEBUG = .dev/debug.c lib/libft.c

CC = gcc

OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
OBJS_SERVER = $(SRCS_SERVER:.c=.o)
OBJS_DEBUG = $(SRCS_DEBUG:.c=.o)


all: $(NAME_CLIENT) $(NAME_SERVER) $(NAME_DEBUG)

$(NAME_CLIENT) : $(OBJS_CLIENT)
	$(CC) $(CFLAGS) $(SRCS_CLIENT) -o $(NAME_CLIENT)
# @ar -rcs $(NAME_CLIENT) $(OBJS_CLIENT)
$(NAME_SERVER) : $(OBJS_SERVER)
	$(CC) $(CFLAGS) $(SRCS_SERVER) -o $(NAME_SERVER)

$(NAME_DEBUG) : $(OBJS_DEBUG)
	$(CC) $(SRCS_DEBUG) -o $(NAME_DEBUG)
	
clean:
	find . -name "*.o" -delete

fclean: clean
	rm -f $(NAME_SERVER) $(NAME_CLIENT) $(NAME_DEBUG)

re: fclean all

run:
	@$(CC) $(SRCS_DEBUG) -o $(NAME_DEBUG)
	@./server | ./debug

s:
	@$(CC) $(CFLAGS) $(SRCS_SERVER) -o $(NAME_SERVER)
	@./server
c:
	@$(CC) $(CFLAGS) $(SRCS_SERVER) -o $(NAME_SERVER)


.PHONY: clean, fclean, all, re
