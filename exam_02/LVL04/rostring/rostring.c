/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:13:41 by cballet           #+#    #+#             */
/*   Updated: 2024/01/29 20:19:23 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_separator(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	w_first_word(char *str, int i)
{
	while (str[i] && !is_separator(str[i]))
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	j;
	int	i;

	if (argc > 1)
	{
		i = 0;
		while (argv[1][i] && is_separator(argv[1][i]))
			i++;
		j = i;
		while (argv[1][j] && !is_separator(argv[1][j]))
			j++;
		while (argv[1][j])
		{
			if (argv[1][j] && !is_separator(argv[1][j])
				&& is_separator(argv[1][j - 1]))
			{
				while (argv[1][j] && !is_separator(argv[1][j]))
				{
					ft_putchar(argv[1][j]);
					j++;
				}
				ft_putchar(' ');
			}
			j++;
		}
		w_first_word(argv[1], i);
	}
	ft_putchar('\n');
	return (0);
}
