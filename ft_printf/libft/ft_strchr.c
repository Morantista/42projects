/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:26:13 by cballet           #+#    #+#             */
/*   Updated: 2023/11/13 17:31:09 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while ((unsigned char)c != *s)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "Bonjour je m'appelle Nicolas";
	int		c;

	c = 'a';
	printf("%s", ft_strchr(s1, c));
}
*/
