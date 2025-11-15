#include "handlers.h"

void	handle_percent(va_list *arg_ptr, int *chars_count)
{
	ft_putchar('%', chars_count);
	arg_ptr++;
}
