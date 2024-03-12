/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 19:07:28 by cballet           #+#    #+#             */
/*   Updated: 2023/11/20 16:43:58 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	unsigned char	*str;
	unsigned char	j;
	size_t			i;

	str = (unsigned char *)s;
	j = (unsigned char)c;
	i = 0;
	while (i < n && n != 0)
	{
		if (str[i] == j)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	unsigned char	s1[] = "Bonjour je m'appelle Nicolas";
	char			*test;
	int				c;

	c = 'j';
	test = ft_memchr(s1, c, 6);
	printf("%s\n", test);
}
*/
