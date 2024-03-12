/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:09:15 by cballet           #+#    #+#             */
/*   Updated: 2024/01/25 11:33:05 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_size(char	*str)
{
	int	size;
	int	new_size;

	size = 0;
	while (str[size])
		size++;
	new_size = size;
	while (str[new_size] == 32 || str[new_size] == '\t')
		new_size--;
	return (new_size);
}

int	main(int argc, char **argv)
{
	int	i;
	int	size;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		size = count_size(argv[1]);
		while (argv[1][i] )
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126)
					write(1, " ", 1);
				i++;
			}
			else
			{
				write (1, &argv[1][i], 1);
				i++;
			}

		}
	}
	write(1, "\n", 1);
	return (0);
}
