#include "ft_printf.h"

int	main(void)
{
	char	*str;

	str = "abc";
	ft_printf("Hello, World!\n");
	ft_printf("Hello, %c%c%c%c%c!\n", 'w', 'o', 'r', 'l', 'd');
	ft_printf("Hello, %s!\n", "World");
	ft_printf("%d %i\n", 42, 42);
	ft_printf("%u\n", -1);
	ft_printf("%x\n", 42);
	ft_printf("%X\n", 42);
	ft_printf("%%\n");
	ft_printf("val = %s | addr = %p\n", str, str);
	str = NULL;
	ft_printf("val = %s | addr = %p\n", str, str);
}
