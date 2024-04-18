/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:25:20 by cballet           #+#    #+#             */
/*   Updated: 2024/04/02 10:42:38 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*dest;
	size_t	s1len;
	size_t	s2len;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	dest = (char *)malloc(sizeof(*s1) * (s1len + s2len + 1));
	i = 0;
	if (!dest)
		return (NULL);

	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	free(s1);
	i = 0;
	while (s2[i])
		dest[s1len++] = s2[i++];
	dest[s1len] = '\0';
	return (dest);
}


