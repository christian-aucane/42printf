#include "handlers.h"

void	handle_char(va_list *arg_ptr, int *chars_count)
{
	int	c;

	c = va_arg(*arg_ptr, int);
	ft_putchar((char)c, chars_count);
}
