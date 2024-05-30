/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:26:13 by cballet           #+#    #+#             */
/*   Updated: 2024/03/25 16:01:57 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)s);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (str);
		i++;
	}
	return (NULL);
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
