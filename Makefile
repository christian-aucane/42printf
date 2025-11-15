NAME = libftprintf.a

SRC = 	./ft_printf.c\
		./utils/ft_putchar.c\
		./utils/ft_putnbr_base.c\
		./utils/ft_putnbr.c\
		./utils/ft_putstr.c\
		./utils/ft_putnbr_ptr.c\
		./handlers/handle_char.c\
		./handlers/handle_heX.c\
		./handlers/handle_hex.c\
		./handlers/handle_uint.c\
		./handlers/handle_int.c\
		./handlers/handle_percent.c\
		./handlers/handle_ptr.c\
		./handlers/handle_string.c\

OBJ		= $(SRC:.c=.o)

INCLUDES	= includes

CCFLAGS		= cc -Wall -Wextra -Werror -I $(INCLUDES)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CCFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
