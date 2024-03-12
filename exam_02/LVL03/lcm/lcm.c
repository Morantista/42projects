/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:29:02 by cballet           #+#    #+#             */
/*   Updated: 2024/01/23 16:37:38 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	nb;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		nb = a;
	else
		nb = b;
	while (1)
	{
		if (nb % a == 0 && nb % b == 0)
			return (nb);
		nb++;
	}


}
