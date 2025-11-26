NAME = libftprintf.a

SRC = 	./ft_printf.c\
		./utils/ft_putchar_count.c\
		./utils/ft_putnbr_base_count.c\
		./utils/ft_putnbr_count.c\
		./utils/ft_putstr_count.c\
		./utils/ft_putnbr_ptr_count.c\
		./handlers/handle_char.c\
		./handlers/handle_hex_upper.c\
		./handlers/handle_hex.c\
		./handlers/handle_uint.c\
		./handlers/handle_int.c\
		./handlers/handle_percent.c\
		./handlers/handle_ptr.c\
		./handlers/handle_string.c\

OBJ		= $(SRC:.c=.o)

CCFLAGS		= cc -Wall -Wextra -Werror

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
