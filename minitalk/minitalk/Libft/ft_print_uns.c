/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:25:56 by cballet           #+#    #+#             */
/*   Updated: 2024/03/20 18:41:13 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print_len(unsigned int n)
{
	unsigned int	len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_print_uns(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n >= 0 && n <= 9)
		ft_putchar_fd(n + 48, 1);
	if (n > 9)
	{
		ft_print_uns(n / 10);
		ft_print_uns(n % 10);
	}
	len += ft_print_len(n);
	return (len);
}

/*
int	main(void)
{
	unsigned int	nb;

	nb = -100;
	printf("%u\n", nb);
	ft_print_uns(nb);
}
*/
