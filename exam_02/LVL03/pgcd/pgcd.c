/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 12:08:09 by cballet           #+#    #+#             */
/*   Updated: 2024/01/24 12:40:28 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	nb1;
	int	nb2;

	if (argc == 3)
	{
		nb1 = atoi(argv[1]);
		nb2 = atoi(argv[2]);
		if (nb1 <= 0 || nb2 <= 0)
			return (0);
		while (nb1 != nb2)
		{
			if (nb1 > nb2)
				nb1 = nb1 - nb2;
			else if (nb2 > nb1)
				nb2 = nb2 - nb1;
		}
		printf("%d", nb2);
	}
	printf("\n");
	return (0);
}
