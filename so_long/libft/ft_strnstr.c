/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:23:35 by cballet           #+#    #+#             */
/*   Updated: 2023/11/21 14:49:01 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*strbig;
	char	*strlittle;

	i = 0;
	strbig = (char *)big;
	strlittle = (char *)little;
	if (strlittle[i] == '\0')
		return (strbig);
	while (i < len && strbig[i])
	{
		j = 0;
		while (strbig[i + j] == strlittle[j] && (i + j) < len)
		{
			j++;
			if (strlittle[j] == 0)
				return (&strbig[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*largestring;
	char	*smallstring;
	char	*ptr;

	largestring = "Foo Bar Baz";
	smallstring = "Bar";
	ptr = ft_strnstr(largestring, smallstring, 10);
	printf("%s", ptr);
}
*/
