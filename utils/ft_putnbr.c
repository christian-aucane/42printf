#include "utils.h"

void	ft_putnbr(int nb, int *chars_count)
{
	long	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		ft_putchar('-', chars_count);
		nbr *= -1;
	}
	if ((nbr >= 0) && (nbr < 10))
		ft_putchar(nbr + '0', chars_count);
	else
	{
		ft_putnbr(nbr / 10, chars_count);
		ft_putnbr(nbr % 10, chars_count);
	}
}
