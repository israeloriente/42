NAME = "minitalk"
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


