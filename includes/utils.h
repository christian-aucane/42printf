#ifndef UTILS_H
# define UTILS_H

# include <stdint.h>
# include <unistd.h>

void	ft_putchar(char c, int *chars_count);
void	ft_putstr(char *str, int *chars_count);
void	ft_putnbr(int nb, int *chars_count);
void	ft_putnbr_base(unsigned int nb, char *base, int *chars_count);
void	ft_putnbr_ptr(uintptr_t nb, int *chars_count);

#endif
