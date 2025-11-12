static void	put_arg(char flag, void *arg, int *chars_count)
{
	// TODO: implementer une fonction par flag et mettre des conditions pour appeler la bonne
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
			put_arg(format[i], va_arg(arg_ptr, void *), &chars_count);
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
