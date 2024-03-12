/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:03:28 by cballet           #+#    #+#             */
/*   Updated: 2024/01/24 15:39:59 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	return (res);
}

void	ft_putnbr_hex(int nb)
{
	if (nb >= 0 && nb < 9)
		ft_putchar(nb + 48);
	else if (nb >= 10 && nb <= 15)
		ft_putchar(nb + 87);
	else if (nb >= 16)
	{
		ft_putnbr_hex (nb / 16);
		ft_putnbr_hex (nb % 16);
	}
}

int	main(int argc, char **argv)
{
	int	nb;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if (argv[1])
			ft_putnbr_hex(nb);
	}
	ft_putchar('\n');
	return (0);
}
