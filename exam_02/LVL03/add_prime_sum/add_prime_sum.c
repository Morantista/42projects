/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:07:27 by cballet           #+#    #+#             */
/*   Updated: 2024/02/01 14:41:38 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (sign * res);
}

int	is_prime(int nb)
{
	int	check;

	check = 2;
	if (nb <= 1)
		return (0);
	while (check * check <= nb)
	{
		if (nb % check == 0)
			return (0);
		check++;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(int argc, char **argv)
{
	int	sum;
	int	nb;

	sum = 0;
	if (argc != 2)
	{
		ft_putchar('0');
	}
	else
	{
		nb = ft_atoi(argv[1]);
		while (nb > 0)
		{
			if (is_prime(nb) == 1)
				sum += nb;
			nb--;
		}
		ft_putnbr(sum);
	}
	ft_putchar('\n');
	return (0);
}
