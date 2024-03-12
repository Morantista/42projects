/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:59:12 by cballet           #+#    #+#             */
/*   Updated: 2024/01/30 16:49:41 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_separator(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	end;
	int	start;
	int	flag;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]) - 1;
		flag = 0;
		while (i >= 0)
		{
			while (is_separator(argv[1][i]))
				i--;
			end = i;
			while (argv[1][i] && !is_separator(argv[1][i]))
				i--;
			start = i + 1;
			if (start == 0)
				flag = 1;
			while (start <= end)
			{
				ft_putchar(argv[1][start]);
				start++;
			}
			if (start > end && flag != 1)
				ft_putchar(' ');
		}
	}
	ft_putchar('\n');
	return (0);
}
