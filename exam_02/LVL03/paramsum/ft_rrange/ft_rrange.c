/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 16:20:02 by cballet           #+#    #+#             */
/*   Updated: 2024/01/31 17:41:04 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	size;
	int	*tab;
	int	i;

	i = 0;
	size = abs(end - start);
	tab = (int *)malloc(sizeof(int) * (size + 1));
	if (!tab)
		return (0);
	while (end > start)
	{
		tab[i] = end;
		end--;
		i++;
	}
	while (end <= start)
	{
		tab[i] = end;
		end++;
		i++;
	}
	return (tab);
}
// int	main()
// {
// 	int	start;
// 	int	end;
// 	int	size;
// 	int	*tab;
// 	int	idx;

// 	start = 3;
// 	end = 8;
// 	size = abs(end - start) + 1;
// 	tab = ft_rrange(start, end);
// 	idx = 0;
// 	while (idx < size)
// 	{
// 		printf("[%d]", tab[idx]);
// 		idx++;
// 	}
// 	printf("\n");
// }

