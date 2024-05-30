/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:05:04 by cballet           #+#    #+#             */
/*   Updated: 2023/11/13 12:14:57 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c;

	c ='a';
	printf("%d", ft_isalpha(c));
}
*/
