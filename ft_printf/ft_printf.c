/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:39:18 by cballet           #+#    #+#             */
/*   Updated: 2023/12/07 18:49:44 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	int	printlengh;

	printlengh = 0;
	if (format == 'c')
		printlengh += ft_print_char(va_arg(args, int));
	else if (format == 's')
		printlengh += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		printlengh += ft_print_ptr(va_arg(args, unsigned long));
	else if (format == 'd' || format == 'i')
		printlengh += ft_print_int(va_arg(args, int));
	else if (format == 'u')
		printlengh += ft_print_uns(va_arg(args, unsigned int));
	else if (format == 'x')
		printlengh += ft_print_hexlow(va_arg(args, unsigned int));
	else if (format == 'X')
		printlengh += ft_print_hexup(va_arg(args, unsigned int));
	else if (format == '%')
		printlengh += ft_print_percent();
	return (printlengh);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		printlengh;
	va_list	args;

	if (!str)
		return (-1);
	i = 0;
	printlengh = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printlengh += ft_format(args, str[i + 1]);
			i++;
		}
		else
			printlengh += ft_print_char(str[i]);
		i++;
	}
	va_end(args);
	return (printlengh);
}
int	main(void)
{
	ft_printf(NULL);
	return(0);
}
