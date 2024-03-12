/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:38:04 by cballet           #+#    #+#             */
/*   Updated: 2024/01/29 13:31:09 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	fprime(int nb)
{
	int	check;

	check = 2;
	if (nb == 1)
	{
		printf("1");
		return ;
	}
	while (nb >= check)
	{
		if (nb % check == 0)
		{
			printf("%d", check);
			if (check != nb)
				printf("*");
			nb = nb / check;
			check--;
		}
		check++;
	}

}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}
