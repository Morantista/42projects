/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:44:46 by cballet           #+#    #+#             */
/*   Updated: 2023/11/21 14:41:34 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;
	size_t	j;

	if (dest == NULL && size == 0)
		return (0);
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	i = destlen;
	if (size <= destlen)
		return (size + srclen);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (srclen + destlen);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[] = "12345";
	char	src[] = "1231";

	printf("%zu", ft_strlcat(dest, src, 7));
}
*/
