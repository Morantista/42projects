#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char	c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[i])
		i++;
	ft_putstr(str);
	return (i);
}
int	ft_print_int(int n)
{
	int printlen;

	printlen = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_print_int(n * -1);
		printlen++;
	}
	else if (n >= 0 && n < 10)
		ft_putchar(n + 48);
	else if (n >= 10)
	{
		ft_print_int(n / 10);
		ft_print_int(n % 10);
	}
	while (n != 0)
	{
		printlen++;
		n = n / 10;
	}
	return (printlen);
}

int	ft_putnbr_base(unsigned int n, char *base, int size)
{
	int printlen;

	printlen = 0;
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(n * -1, base, size);
		printlen++;
	}
	if (n >= 0 && n < (unsigned int)size)
		write(1, base + n, 1);
	if (n >= (unsigned int)size)
	{
		ft_putnbr_base(n / size, base, size);
		ft_putnbr_base(n % size, base, size);
	}
	while (n != 0)
	{
		printlen++;
		n = n / size;
	}
	return (printlen);
}

int	ft_print_hex(unsigned int n)
{
	char *base;
	int	printlen;
	int size;

	base = "0123456789abcdef";
	printlen = 0;
	size = 0;
	while (base[size])
		size++;
	printlen += ft_putnbr_base(n, base, size);
	return (printlen);

}

int	ft_format(va_list args, char format)
{

	int	printlen;

	printlen = 0;
	if (format == 's')
		printlen += ft_print_str(va_arg(args, char *));
	else if (format == 'x')
		printlen += ft_print_hex(va_arg(args, unsigned int));
	else if (format == 'd')
		printlen += ft_print_int(va_arg(args, int));
	return (printlen);
}

int ft_printf(const char *str, ... )
{
	va_list	args;
	int	printlen;
	int	i;

	if (!str)
		return (-1);
	va_start(args, str);
	i = 0;
	printlen = 0;
	while (str[i])
	{
		if (str[i] == '%' && (str[i + 1] == 's' || str[i + 1] == 'd' || str[i + 1] == 'x'))
		{
			printlen += ft_format(args, str[i + 1]);
			i++;
		}
		else
			printlen += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (printlen);
}

int	main()
{
	ft_printf("Coucou %s\n", "samy");
	ft_printf("Coucou %d\n", 1884);
	ft_printf("couccou je suis a %x\n", 42);

}
