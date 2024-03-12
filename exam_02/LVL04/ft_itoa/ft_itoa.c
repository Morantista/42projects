/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:00:58 by cballet           #+#    #+#             */
/*   Updated: 2024/02/01 15:53:01 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	len_nb(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	if (nb >= 0 && nb <= 9)
		len++;
	while (nb >= 10)
	{
		while (nb /= 10)
			len++;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char	*dest;
	int		size;
	int	nb;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	size = len_nb(nbr);
	dest = (char *)malloc(sizeof(char) * size  + 1);
	if (!dest)
		return (NULL);
	dest[size + 1] = '\0';
	nb = nbr;
	if (nb == 0)
		dest[0] = '0';
	else
	{
		if (nb < 0)
		{
			nb *= -1;
			dest[0] = '-';
		}
		size--;
		while (nb > 0)
		{
			dest[size] = nb % 10 + 48;
			nb /= 10;
			size--;

		}
	}
	return (dest);

}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(5));
// 	printf("%s\n", ft_itoa(54));
// 	printf("%s\n", ft_itoa(254));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(-7));
// 	printf("%s\n", ft_itoa(-54));
// 	printf("%s\n", ft_itoa(-854));
// 	printf("%s\n", ft_itoa(-2147483648));

// }
