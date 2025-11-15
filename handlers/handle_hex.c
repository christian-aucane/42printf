#include "handlers.h"

void	handle_hex(va_list *arg_ptr, int *chars_count)
{
	unsigned int	nb;

	nb = va_arg(*arg_ptr, unsigned int);
	ft_putnbr_base(nb, "0123456789abcdef", chars_count);
}
