/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:41:03 by cballet           #+#    #+#             */
/*   Updated: 2024/02/01 13:53:06 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_search(char *str, int c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;
	int j;
	int	k;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
			i++;
		j = 0;
		while (argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		k = 0;
		while (k <= i)
		{
			if (ft_search(argv[1], argv[1][k], k) == 0)
				write(1, &argv[1][k], 1);
			k++;
		}

	}
	write(1, "\n", 1);
	return (0);
}


