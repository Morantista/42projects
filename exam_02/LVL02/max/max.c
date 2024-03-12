/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:49:33 by cballet           #+#    #+#             */
/*   Updated: 2024/01/25 11:07:41 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (len == 0)
		return (0);
	while (j <= len)
	{
		if (tab[i] < tab[j])
			tab[i] = tab[j];
		j++;

	}
	return (tab[i]);
}

// int	main()
// {
// 	int	tab[5];

// 	tab[0] = 1;
// 	tab[1] = 41;
// 	tab[2] = 42;
// 	tab[3] = 8;
// 	tab[4] = 16;
// 	printf("%d", max(tab, 5));
// 	return (0);
// }
