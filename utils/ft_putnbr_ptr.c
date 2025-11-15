#include "utils.h"

void	ft_putnbr_ptr(uintptr_t nb, int *chars_count)
{
	uintptr_t	base_len;
	char		*base;

	base = "0123456789abcdef";
	base_len = 16;
	if (nb >= base_len)
		ft_putnbr_base(nb / base_len, base, chars_count);
	ft_putchar(base[nb % base_len], chars_count);
}
