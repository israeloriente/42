CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= /bin/rm -f
NAME	= libft.a
SRCS	= ft_strlen.c ft_memcpy.c ft_atoi.c
OBJS	= $(SRCS:.c=.o)

# Commands
all: $(NAME)
$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
fclean:		clean
	$(RM) $(NAME)
re:	fclean all

.PHONY:	all clean fclean re

