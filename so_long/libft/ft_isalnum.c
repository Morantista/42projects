/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:31:50 by cballet           #+#    #+#             */
/*   Updated: 2023/11/13 12:14:37 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	else if (i >= '0' && i <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;
	char	f;

	c = 'A';
	f = '8';
	printf("%d", ft_isalnum(c));
	printf("%d", ft_isalnum(f));
}
*/
