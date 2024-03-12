/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:04:32 by cballet           #+#    #+#             */
/*   Updated: 2024/01/25 13:19:09 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[i] && s1[i] == s2[j] && s2[j])
	{
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}

// int	main()
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "ABJ";
// 	str2 = "ABC";
// 	printf("%d", ft_strcmp(str1, str2));
// 	return (0);
// }
