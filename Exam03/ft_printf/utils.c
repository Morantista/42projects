#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_putnbr_base(int n, char *base)
{
	int printlen;

	printlen = 0;
	if (n < 0)
	{
		ft_putchar('-');
		ft_print_int(n * -1, base);
		printlen++;
	}
	if (n >= 0 && n < 16)
		ft_putchar(base + n);
	if (n >= 10)
	{
		ft_print_int(n / 16, base);
		ft_print_int(n % 16, base);
	}
	while (n != 0)
	{
		printlen++;
		n = n / 10;
	}
	return (printlen);
}

int	ft_print_hex(unsigned int n)
{
	char *base;
	int	printlen;

	base = "0123456789abcdef";
	printlen = 0;
	printlen += ft_putnbr_base(n, base);

}
