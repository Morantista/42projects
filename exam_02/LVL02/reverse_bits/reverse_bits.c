/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:52:13 by cballet           #+#    #+#             */
/*   Updated: 2024/02/07 12:01:53 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	char	res;
	int	i;

	i = 7;
	while (i >= 0)
	{
		res = res * 2 + octet % 2;
		octet /= 2;
		i--;
	}
	return (res);

}
