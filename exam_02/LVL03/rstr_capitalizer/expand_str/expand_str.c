/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:09:24 by cballet           #+#    #+#             */
/*   Updated: 2024/01/31 21:10:45 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_separator(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	flag;

	if (argc == 2)
	{
		i = 0;
		flag = 0;
		while (argv[1][i] && is_separator(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] && is_separator(argv[1][i]))
				flag = 1;
			if (!is_separator(argv[1][i]))
			{
				if (flag == 1 )
					write(1, "   ", 3);
				flag = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
