#include "handlers.h"

void	handle_int(va_list *arg_ptr, int *chars_count)
{
	int	nb;

	nb = va_arg(*arg_ptr, int);
	ft_putnbr(nb, chars_count);
}
