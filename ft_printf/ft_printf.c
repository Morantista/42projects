#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
static int	ft_putnbr_base(unsigned int n, char *base, int size)
{
	int	len;

	if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(n * (-1), base, size);
	}
	else if ((n >= 0) && (n < (unsigned int)size))
		write(1, base + n, 1);
	else if (n >= (unsigned int)size)
	{
		ft_putnbr_base(n / size, base, size);
		ft_putnbr_base(n % size, base, size);
	}
	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / size;
	}
	return (len);
}

int	ft_print_hexlow(unsigned int n)
{
	char	*base;
	int		i;
	int		len;

	base = "0123456789abcdef";
	i = 0;
	len = 0;
	while (base[i])
		i++;
	len = ft_putnbr_base(n, base, i);
	return (len);
}

static int	ft_print_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_print_int(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_print_int(n * (-1));
		len++;
	}
	else if (n >= 0 && n <= 9)
		ft_putchar(n + 48);
	else if (n > 9)
	{
		ft_print_int(n / 10);
		ft_print_int(n % 10);
	}
	len += ft_print_len(n);
	return (len);
}
void ft_putstr(char *str)
{
	int i;

	i = 0;
	if (!str)
		return ;
	while(str[i])
	{
		write(1,&str[i], 1);
		i++;
	}
}
int	ft_print_str(char *s)
{
	unsigned int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (s[i])
		i++;
	ft_putstr(s);
	return (i);
}

static int	ft_format(va_list args, const char format)
{
	int	printlengh;

	printlengh = 0;
	if (format == 's')
		printlengh += ft_print_str(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		printlengh += ft_print_int(va_arg(args, int));
	else if (format == 'x')
		printlengh += ft_print_hexlow(va_arg(args, unsigned int));
	return (printlengh);
}

int ft_printf(const char *str, ... )
{
	int	i;
	int print_len;
	va_list	args;
	if (!str)
		return (-1);
	i = 0;
	print_len = 0;
	va_start(args, str);
	while(str[i])
	{
		if (str[i] == '%')
		{
			print_len += ft_format(args, str[i + 1]);
			i++;
		}
		else
			print_len += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return(print_len);
}

int	main()
{
	ft_printf("%s\n", "toto");
	ft_printf("Hexadecimal for %d is %x\n", 42, 42);
	ft_printf("Magic %s is %d", "number", 42);
	ft_printf("Magic %f is z", "number");
}
