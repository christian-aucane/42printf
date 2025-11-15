#include "handlers.h"

void	handle_ptr(va_list *args, int *chars_count)
{
	uintptr_t	ptr_val;

	ptr_val = va_arg(*args, uintptr_t);
	if (!ptr_val)
	{
		ft_putstr("(nil)", chars_count);
		return ;
	}
	ft_putstr("0x", chars_count);
	ft_putnbr_ptr(ptr_val, chars_count);
}
