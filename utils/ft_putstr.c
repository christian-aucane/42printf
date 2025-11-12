#include "utils.h"

void	ft_putstr(char *str, int *chars_count)
{
	while (*str)
	{
		ft_putchar(*str, chars_count);
		str++;
	}
}
