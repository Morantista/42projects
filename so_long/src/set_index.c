/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:53:44 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 14:12:21 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	set_index_start_player(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->maps[i])
	{
		j = 0;
		while (game->maps[i][j])
		{
			if (game->maps[i][j] == PLAYER)
			{
				game->content.x_startp = j;
				game->content.y_startp = i;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	set_index_start_enemy(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->maps[i])
	{
		j = 0;
		while (game->maps[i][j])
		{
			if (game->maps[i][j] == ENEMY)
			{
				game->content.x_startx = j;
				game->content.y_startx = i;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	set_index_start_enemy2(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->maps[i])
	{
		j = 0;
		while (game->maps[i][j])
		{
			if (game->maps[i][j] == ENEMY_2)
			{
				game->content.x_startw = j;
				game->content.y_startw = i;
			}
			j++;
		}
		i++;
	}
	return (1);
}
int	set_index_player(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->maps[i])
	{
		j = 0;
		while (game->maps[i][j])
		{
			if (game->maps[i][j] == PLAYER)
			{
				game->content.x = j;
				game->content.y = i;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	set_index_enemy(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->maps[i])
	{
		j = 0;
		while (game->maps[i][j])
		{
			if (game->maps[i][j] == ENEMY)
			{
				game->content.x_enemyx = j;
				game->content.y_enemyx = i;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	set_index_enemy2(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->maps[i])
	{
		j = 0;
		while (game->maps[i][j])
		{
			if (game->maps[i][j] == ENEMY_2)
			{
				game->content.x_enemyw = j;
				game->content.y_enemyw = i;
			}
			j++;
		}
		i++;
	}
	return (1);
}
