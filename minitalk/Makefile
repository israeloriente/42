NAME_CLIENT = client
NAME_SERVER = server
CFLAGS = -Wall -Wextra -Werror
SRCS_CLIENT = client.c
SRCS_SERVER = server.c
CC = gcc
OBJS_CLIENT = $(SRCS_CLIENT:.c=.o)
OBJS_SERVER = $(SRCS_SERVER:.c=.o)
RM			= /bin/rm -f

all: $(NAME_CLIENT) $(NAME_SERVER)
$(NAME_CLIENT) : $(OBJS_CLIENT)
	make -C ./lib/ft_printf --no-print-directory
	make -C ./lib/libft
	$(CC) $(CFLAGS) $(SRCS_CLIENT) -o $(NAME_CLIENT) minitalk.h ./lib/ft_printf/libftprintf.a ./lib/libft/libft.a
$(NAME_SERVER) : $(OBJS_SERVER)
	$(CC) $(CFLAGS) $(SRCS_SERVER) -o $(NAME_SERVER) minitalk.h ./lib/ft_printf/libftprintf.a ./lib/libft/libft.a

clean: 
	@$(RM) $(OBJS_CLIENT) $(OBJS_SERVER)
	make clean -C ./lib/ft_printf --no-print-directory
	make clean -C ./lib/libft --no-print-directory
fclean: clean
	@$(RM) $(NAME_SERVER) $(NAME_CLIENT) 
	make fclean -C ./lib/ft_printf --no-print-directory
	make fclean -C ./lib/libft --no-print-directory
re: fclean all

.PHONY: clean, fclean, all, re
