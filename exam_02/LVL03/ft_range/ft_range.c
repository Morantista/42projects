/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:44:06 by cballet           #+#    #+#             */
/*   Updated: 2024/01/29 16:51:01 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = abs(end - start);
	tab = (int *)malloc(sizeof(int) * (size + 1));
	if (!tab)
		return (0);
	while (start >= end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	while (start <= end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	return (tab);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*tab;
// 	int	idx;
// 	int	start;
// 	int	end;
// 	int	size;

// 	idx = 0;
// 	start = 6;
// 	end = -4;
// 	tab = ft_range(start, end);
// 	size = abs(end - start) + 1;
// 	while (idx < size)
// 	{
// 		printf(" [%d] ", tab[idx]);
// 		idx++;
// 	}
// 	printf("\n");
// }
