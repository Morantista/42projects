/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:42:59 by cballet           #+#    #+#             */
/*   Updated: 2023/11/17 12:03:46 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (2);
	if (nb < 0)
		len++;
	while (nb < -9 || nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	len++;
	len++;
	return (len);
}

static int	ft_pos(int nb)
{
	if (nb < 0)
	{
		nb *= -1;
		return (nb);
	}
	return (nb);
}

char	*ft_itoa(int nb)
{
	char	*dest;
	size_t	len;
	int		is_negative;

	is_negative = (nb < 0);
	dest = ft_calloc(ft_count(nb), sizeof(char));
	if (!dest)
		return (NULL);
	if (nb == 0)
		dest[0] = '0';
	if (is_negative)
		dest[0] = '-';
	len = ft_count(nb);
	len--;
	while (nb != 0)
	{
		dest[--len] = '0' + ft_pos(nb % 10);
		nb = (nb / 10);
	}
	return (dest);
}
