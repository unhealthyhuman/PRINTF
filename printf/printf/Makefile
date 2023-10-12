NAME = libftprintf.a

COMPILER = cc

FLAGS = -Wall -Werror -Wextra -I.

SRCS = ft_printf.c\
ft_putchar.c\
ft_putnbr.c\
ft_putptr.c\
ft_putstr.c\
ft_strlen.c

OBJS := $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
