#include "ft_printf.h"

t_handler_func	get_handler_func(char flag)
{
	int							i;
	static const t_flag_handler	handlers[10] = {{'c', handle_char}, {'s',
			handle_string}, {'p', handle_ptr}, {'d', handle_int}, {'i',
			handle_int}, {'u', handle_uint}, {'x', handle_hex}, {'X',
			handle_heX}, {'%', handle_percent}, {'\0', NULL}};

	i = 0;
	while (handlers[i].flag)
	{
		if ((handlers[i].flag == flag))
			return (handlers[i].func);
		i++;
	}
	return (NULL);
}

int	handle_flag(char flag, va_list *arg_ptr, int *chars_count_ptr)
{
	t_handler_func	handler_func;

	handler_func = get_handler_func(flag);
	if (!handler_func)
		return (0);
	handler_func(arg_ptr, chars_count_ptr);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg_ptr;
	int		i;
	int		is_flag;
	int		chars_count;

	chars_count = 0;
	i = 0;
	is_flag = 0;
	va_start(arg_ptr, format);
	while (format[i])
	{
		if (is_flag)
		{
			handle_flag(format[i], &arg_ptr, &chars_count);
			is_flag = 0;
		}
		else if (format[i] == '%')
			is_flag = 1;
		else
			ft_putchar(format[i], &chars_count);
		i++;
	}
	va_end(arg_ptr);
	return (chars_count);
}
