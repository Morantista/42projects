/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:40:30 by cballet           #+#    #+#             */
/*   Updated: 2023/11/21 16:59:32 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_newlen(const char *str, int nb)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i - nb);
}

char	*ft_substr(char const *src, unsigned int start, size_t len)
{
	char	*dest;
	size_t	new_len;

	if (!src)
		return (NULL);
	if (start > ft_strlen(src))
	{
		dest = ft_calloc(1, sizeof(char));
		if (!dest)
			return (NULL);
	}
	else
	{
		new_len = ft_newlen(src, start);
		if (!(new_len < len))
			new_len = len;
		dest = (char *)malloc(sizeof(char) * (new_len + 1));
		if (!dest)
			return (NULL);
		dest[new_len] = '\0';
		while (new_len-- > 0)
				dest[new_len] = src[start + new_len];
	}
	return (dest);
}
