/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexlow.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:37:49 by cballet           #+#    #+#             */
/*   Updated: 2023/12/04 14:40:12 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
