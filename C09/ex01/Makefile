SRCS_P = ./srcs/
SRCS = $(SRCS_P)ft_putchar.c $(SRCS_P)ft_putstr.c $(SRCS_P)ft_strcmp.c $(SRCS_P)ft_strlen.c $(SRCS_P)ft_swap.c
OBJS = $(SRCS:.c=.o)

all: libft.a

%.o: %.c
	gcc -Wall -Wextra -Werror -c $*.c -I./includes/ -o $*.o



libft.a : $(OBJS)
	ar rc libft.a $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf libft.a

re : fclean all

.PHONY: all clean re