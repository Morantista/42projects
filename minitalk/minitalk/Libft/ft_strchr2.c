/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:08:27 by cballet           #+#    #+#             */
/*   Updated: 2024/03/25 12:37:19 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr2(char *str, char *cmp)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '\0' && cmp[j] == '\0')
		return (0);
	while (str[i])
	{
		while (str[i + j] == cmp[j] && cmp[j] && str[i + j])
		{
			if (str[i + j + 1] != cmp[j + 1])
				return (0);
			j++;
		}
		if (str[i + j] == '\0' && cmp[j] == '\0')
			return (1);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "Bonjour. 1";

// 	printf("%d", ft_strchr2(s1, "jour. "));
// }
