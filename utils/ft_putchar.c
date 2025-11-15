#include "utils.h"

void	ft_putchar(char c, int *chars_count)
{
	write(1, &c, 1);
	(*chars_count)++;
}
