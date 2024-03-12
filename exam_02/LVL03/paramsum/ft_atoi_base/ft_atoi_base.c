/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:01:23 by cballet           #+#    #+#             */
/*   Updated: 2024/01/30 15:49:58 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isvalid(char c, int base)
{
	char	digits[17] = "0123456789abcdef";
	char	digits2[17] = "0123456789ABCDEF";

	while (base)
	{
		if (digits[base] == c || digits2[base] == c)
			return (1);
		base--;
	}
	return (0);
}
int	ft_atoi_base(const char *str, int str_base)
{
	int	i;
	int	res;
	int	sign;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (ft_isvalid(str[i], str_base))
	{
		res *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			res += str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			res += str[i] - 'a' + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			res += str[i] - 'A' + 10;
		i++;
	}
	return (res * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;

// 	s = "Ceci permet de decouvrir le fonctionnement de ton ft_atoi_base.";
// 	printf("%d", ft_atoi_base(s, 16));
// }
