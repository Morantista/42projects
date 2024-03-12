/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:42:31 by cballet           #+#    #+#             */
/*   Updated: 2024/01/23 16:25:53 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	is_word;

	i = 0;
	is_word = 0;

	if (argc == 2)
	{
		while ((argv[1][i] == ' ' || argv[1][i] == '\t') && is_word == 0)
			i++;
		while (argv[1][i] >= 33 && argv[1][i] <= 126)
		{
			write(1, &argv[1][i], 1);
			i++;
			is_word++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
