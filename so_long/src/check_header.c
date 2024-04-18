/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_header.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:51:11 by cballet           #+#    #+#             */
/*   Updated: 2024/04/18 08:44:05 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	char_is_format(char c)
{
	if (c == FLOOR || c == WALL || c == EXIT || c == LETTER_1 || c == LETTER_2
		|| c == LETTER_3 || c == LETTER_4 || c == LETTER_5 || c == LIFE_1
		|| c == LIFE_2 || c == LIFE_3 || c == LIFE_4 || c == NUMBER_T
		|| c == NUMBER_M || c == NUMBER_H || c == NUMBER_F || c == NUMBER_U
		|| c == '\0')
		return (1);
	return (0);
}
int	check_size_header(t_game *game)
{
	int	i;
	int	j;
	int	size_target;
	int	size_format;

	i = 0;
	while (game->header[i])
	{
		j = 0;
		size_target = ft_strlen(game->header[0]);
		while (game->header[i][j])
			j++;
		if (j > size_target || j < size_target)
			print_error("Error\nheader size's not respected\n", game);
		i++;
	}
	if (i == size_target)
		print_error("Error\nheader is not rectangular\n", game);
	size_format = ft_strlen(game->map[0]);
	if (size_format != size_target)
		ft_printf("Warning!\nSize map and size header are differents\n");
	return (1);
}

int	check_outline_header(t_game *game)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	l = ft_strlen(game->header[0]) - 1;
	while (game->header[k] != NULL)
		k++;
	while (i < k)
	{
		j = 0;
		while (j < l)
		{
			if (!(game->header[0][j] == '1' && game->header[k - 1][j] == '1'))
				print_error("Error\nNo wall on the header line\n", game);
			if (!(game->header[i][0] == '1' && game->header[i][l] == '1'))
				print_error("Error\nNo wall on the header side\n", game);
			j++;
		}
		i++;
	}
	return (1);
}

// int	check_format_header1(t_game *game)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (game->header[i])
// 	{
// 		j = 0;
// 		while (game->header[i][j])
// 		{
// 			if (!(game->header[i][j] == FLOOR || game->header[i][j] == WALL
// 					|| game->header[i][j] == EXIT
// 					|| game->header[i][j] == LETTER_1
// 					|| game->header[i][j] == LETTER_2
// 					|| game->header[i][j] == LETTER_3
// 					|| game->header[i][j] == LETTER_4
// 					|| game->header[i][j] == LETTER_5
// 					|| game->header[i][j] == '\0'))
// 				print_error("Error\nFormat header1 is not valid\n", game);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }
// int	check_format_header2(t_game *game)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	while (game->header[i])
// 	{
// 		j = 0;
// 		while (game->header[i][j])
// 		{
// 			if (!(game->header[i][j] == LIFE_1 || game->header[i][j] == LIFE_2
// 					|| game->header[i][j] == LIFE_3
// 					|| game->header[i][j] == LIFE_4
// 					|| game->header[i][j] == NUMBER_T
// 					|| game->header[i][j] == NUMBER_M
// 					|| game->header[i][j] == NUMBER_H
// 					|| game->header[i][j] == NUMBER_F
// 					|| game->header[i][j] == NUMBER_U
// 					|| game->header[i][j] == '\0'
// 					|| check_format_header1(game)))
// 				print_error("Error\nFormat header2 is not valid\n", game);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }

int	check_format_header2(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->header[i])
	{
		j = 0;
		while (game->header[i][j])
		{
			if (!(char_is_format(game->header[i][j])))
				print_error("Error\nFormat header2 is not valid\n", game);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_header(t_game *game)
{
	if (!check_size_header(game))
		return (0);
	if (!check_outline_header(game))
		return (0);
	// if (!check_format_header1(game))
	// 	return (0);
	if (!check_format_header2(game))
		return (0);
	return (1);
}
