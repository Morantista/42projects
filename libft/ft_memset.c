/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:07:37 by cballet           #+#    #+#             */
/*   Updated: 2023/11/13 12:23:54 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Salut a toi jeune etudiant";

	printf("before: %s\n", str);
	ft_memset(str, '*', 5);
	printf("after: %s\n", str);
}
*/
