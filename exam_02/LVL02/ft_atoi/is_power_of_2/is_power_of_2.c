/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:25:00 by cballet           #+#    #+#             */
/*   Updated: 2024/01/30 10:37:18 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main()
// {
// 	int	nb;

// 	nb = 4;
// 	if (is_power_of_2(nb))
// 		printf("c'est ok");
// 	else
// 		printf("c'est pas ok");
// }
