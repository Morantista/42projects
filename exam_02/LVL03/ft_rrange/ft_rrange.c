/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:28:36 by cballet           #+#    #+#             */
/*   Updated: 2024/02/01 16:45:54 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	size;

	size = abs(end - start);
	tab = (int *)malloc(sizeof(int) * size + 1);
	i = 0;
	if (!tab)
		return (NULL);
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
	return(tab);
}

// int	main()
// {
// 	int	i;
// 	int	start;
// 	int	end;
// 	int	size;
// 	int	*tab;

// 	i = 0;
// 	start = 3;
// 	end = 8;
// 	size = abs(start - end);
// 	tab = ft_rrange(start, end);

// 	while (i <= size)
// 	{
// 		printf("%d", tab[i]);
// 		i++;
// 	}
// }
