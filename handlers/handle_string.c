#include "handlers.h"

void	handle_string(va_list *arg_ptr, int *chars_count)
{
	char	*str;

	str = va_arg(*arg_ptr, char *);
	if (!str)
		str = "(null)";
	ft_putstr(str, chars_count);
}
