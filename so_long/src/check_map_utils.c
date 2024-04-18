/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 19:40:01 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 09:47:21 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_size(t_game *game)
{
	int	i;
	int	j;
	int	size_target;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		size_target = ft_strlen(game->map[0]);
		while (game->map[i][j])
			j++;
		if (j > size_target || j < size_target)
			print_error("Error\nSize not respected\n", game);
		i++;
	}
	if (i == size_target)
		print_error("Error\nMap is not rectangular\n", game);
	return (1);
}

int	check_outline(t_game *game)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	l = ft_strlen(game->map[0]) - 1;
	while (game->map[k] != NULL)
		k++;
	while (i < k)
	{
		j = 0;
		while (j < l)
		{
			if (!(game->map[0][j] == '1' && game->map[k - 1][j] == '1'))
				print_error("Error\nNo wall on the line\n", game);
			if (!(game->map[i][0] == '1' && game->map[i][l] == '1'))
				print_error("Error\nNo wall on the side\n", game);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_format(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (!(game->map[i][j] == FLOOR || game->map[i][j] == WALL || game->map[i][j] == COLLECT
					|| game->map[i][j] == EXIT || game->map[i][j] == PLAYER
					|| game->map[i][j] == ENEMY || game->map[i][j] == ENEMY_2 ||game->map[i][j] == '\0'))
				print_error("Error\nFormat map is not valid\n", game);
			j++;
		}
		i++;
	}
	return (1);
}

int	count_height(char **map)
{
	int	x;
	int y;

	y = 0;
	while (map[y]!= NULL)
	{
		x = 0;
		while (map[y][x])
			x++;
		y++;
	}
	return (y);
}

int	search_and_count(char c, t_game *game)
{
	int	y;
	int	x;

	y = 0;
	game->count = 0;
	while(game->map[y] != NULL)
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == c)
				game->count++;
			x++;
		}
		y++;
	}
	return (1);

}

