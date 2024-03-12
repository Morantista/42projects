/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:28:07 by cballet           #+#    #+#             */
/*   Updated: 2023/12/04 14:42:54 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_is_a_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

static int	ft_putnbr_base(unsigned long n, char *base, int size)
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
	while (n != 0)
	{
		len++;
		n = n / size;
	}
	return (len);
}

int	ft_print_ptr(unsigned long ptr)
{
	char			*base;
	unsigned int	i;
	unsigned int	len;

	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	base = "0123456789abcdef";
	i = 0;
	len = 0;
	if (!ptr)
		return (0);
	if (ft_is_a_base(base) == 1)
	{
		while (base[i])
			i++;
		write(1, "0x", 2);
		len = ft_putnbr_base(ptr, base, i);
		return (len + 2);
	}
	return (0);
}

/*
int	main(void)
{
	char			*base;
	int				size;
	unsigned int	nb;

	base = "0123456789abcdef";
	size = 16;
	nb = 16;
	printf("%x\n", nb);
	ft_putnbr_base(nb, base, size);
}
*/
