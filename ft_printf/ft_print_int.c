/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:40:28 by cballet           #+#    #+#             */
/*   Updated: 2023/12/04 14:39:28 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
		ft_putchar_fd('-', 1);
		ft_print_int(n * (-1));
		len++;
	}
	else if (n >= 0 && n <= 9)
		ft_putchar_fd(n + 48, 1);
	else if (n > 9)
	{
		ft_print_int(n / 10);
		ft_print_int(n % 10);
	}
	len += ft_print_len(n);
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nb;

	nb = -1;
	printf("%d\n", nb);
	ft_print_int(nb);
}
*/
