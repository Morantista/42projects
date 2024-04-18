/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:44:46 by cballet           #+#    #+#             */
/*   Updated: 2023/11/13 12:15:31 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int i)
{
	if (i >= 0 && i <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;
	char	d;
	char	e;
	char	f;

	c = '8';
	d = 'b';
	e = '^';
	f = ' ';
	printf("%d", ft_isascii(c));
	printf("%d", ft_isascii(d));
	printf("%d", ft_isascii(e));
	printf("%d", ft_isascii(f));
}
*/
