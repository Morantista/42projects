/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:39:44 by cballet           #+#    #+#             */
/*   Updated: 2024/01/29 15:59:51 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}
int	ft_start(char *str)
{
	int	i;
	int	flag_alpha;

	i = ft_strlen(str) - 1;
	flag_alpha = 0;
	while ((str[i] == ' ') || (str[i] == '\t' && flag_alpha == 0))
		i--;
	while (str[i] >= 33 && str[i] <= 126)
	{
		i--;
		flag_alpha++;
	}
	return (i);
}

int	main(int argc, char **argv)
{

	int	i;

	if (argc == 2)
	{
		i = ft_start(argv[1]);
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1 , "\n", 1);
	return (0);
}
