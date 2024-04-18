/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:52:36 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 11:23:25 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	check_player(t_game *game)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	p = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == PLAYER)
			{
				p++;
			}
			j++;
		}
		i++;
	}
	if (p < 1)
		print_error("Error\nToo few player\n", game);
	if (p > 1)
		print_error("Error\nToo many players\n", game);
	return (1);
}

int	check_exit(t_game *game)
{
	int	i;
	int	j;
	int	e;

	i = 0;
	e = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == EXIT)
				e++;
			j++;
		}
		i++;
	}
	if (e < 1)
		print_error("Error\nToo few exit\n", game);
	else if (e > 1)
		print_error("Error\nToo many exits\n", game);
	return (1);
}

int	check_collect(t_game *game)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == COLLECT)
				c++;
			j++;
		}
		i++;
	}
	if (c < 1)
		print_error("Error\nToo few collects\n", game);
	return (1);
}

void	check_return_line(char *str, t_game *game)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n' && str[i - 1] == '\n')
		{
			free(str);
			print_error2("Error\nEmpty line", game);
		}
		if (str[0] == '\n')
		{
			free(str);
			print_error2("Error\nFirst line is empty", game);
		}
		i++;
	}
	if (str[i - 1] == '\n')
	{
		free(str);
		print_error2("Error\nLast line is empty", game);
	}
}

int	check_map(t_game *game)
{
	if (!check_size(game))
		return (0);
	if (!check_outline(game))
		return (0);
	if (!check_format(game))
		return (0);
	if (!check_player(game))
		return (0);
	if (!check_exit(game))
		return (0);
	if (!check_collect(game))
		return (0);
	return (1);
}
