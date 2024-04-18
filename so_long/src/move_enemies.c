/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemies.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 21:00:49 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 21:22:28 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move_enemy_bis(int i, t_game *game)
{
	if (i > 30 && i <= 34 && game->maps[game->content.y_enemyx
		+ 1][game->content.x_enemyx] == FLOOR)
		move_down_enemy(game);
	else if (i > 34 && i <= 36
		&& game->maps[game->content.y_enemyx][game->content.x_enemyx
		+ 1] == FLOOR)
		move_right_enemy(game);
	else if (i > 36 && i <= 41 && game->maps[game->content.y_enemyx
		- 1][game->content.x_enemyx] == FLOOR)
		move_top_enemy(game);
	else if (i > 41 && i <= 45
		&& game->maps[game->content.y_enemyx][game->content.x_enemyx
		- 1] == FLOOR)
		move_left_enemy(game);
	else if (i > 45 && i <= 51 && game->maps[game->content.y_enemyx
		- 1][game->content.x_enemyx] == FLOOR)
		move_top_enemy(game);
	else if (i > 51 && i <= 60
		&& game->maps[game->content.y_enemyx][game->content.x_enemyx
		- 1] == FLOOR)
		move_left_enemy(game);
}

void	move_enemy(int i, t_game *game)
{
	set_index_enemy(game);
	if (i >= 0 && i <= 4
		&& game->maps[game->content.y_enemyx][game->content.x_enemyx
		+ 1] == FLOOR)
		move_right_enemy(game);
	else if (i > 4 && i <= 10 && game->maps[game->content.y_enemyx
		+ 1][game->content.x_enemyx] == FLOOR)
		move_down_enemy(game);
	else if (i > 10 && i <= 16
		&& game->maps[game->content.y_enemyx][game->content.x_enemyx
		- 1] == FLOOR)
		move_left_enemy(game);
	else if (i > 16 && i <= 20 && game->maps[game->content.y_enemyx
		- 1][game->content.x_enemyx] == FLOOR)
		move_top_enemy(game);
	else if (i > 20 && i <= 24
		&& game->maps[game->content.y_enemyx][game->content.x_enemyx
		+ 1] == FLOOR)
		move_right_enemy(game);
	else if (i > 24 && i <= 30 && game->maps[game->content.y_enemyx
		+ 1][game->content.x_enemyx] == FLOOR)
		move_down_enemy(game);
	else
		move_enemy_bis(i, game);
}
void	move_enemy2_bis(int i, t_game *game)
{
	if (i > 30 && i <= 35
		&& game->maps[game->content.y_enemyw][game->content.x_enemyw
		- 1] == FLOOR)
		move_left_enemy2(game);
	else if (i > 35 && i <= 39 && game->maps[game->content.y_enemyw
		+ 1][game->content.x_enemyw] == FLOOR)
		move_down_enemy2(game);
	else if (i > 39 && i <= 42 && game->maps[game->content.y_enemyw
		- 1][game->content.x_enemyw] == FLOOR)
		move_top_enemy2(game);
	else if (i > 42 && i <= 48
		&& game->maps[game->content.y_enemyw][game->content.x_enemyw
		+ 1] == FLOOR)
		move_right_enemy2(game);
	else if (i > 48 && i <= 54 && game->maps[game->content.y_enemyw
		- 1][game->content.x_enemyw] == FLOOR)
		move_top_enemy2(game);
	else if (i > 54 && i <= 60
		&& game->maps[game->content.y_enemyw][game->content.x_enemyw
		- 1] == FLOOR)
		move_left_enemy2(game);
}

void	move_enemy2(int i, t_game *game)
{
	set_index_enemy2(game);
	if (i >= 0 && i <= 6
		&& game->maps[game->content.y_enemyw][game->content.x_enemyw
		- 1] == FLOOR)
		move_left_enemy2(game);
	else if (i >= 6 && i <= 9
		&& game->maps[game->content.y_enemyw][game->content.x_enemyw
		+ 1] == FLOOR)
		move_right_enemy2(game);
	else if (i > 9 && i <= 15
		&& game->maps[game->content.y_enemyw][game->content.x_enemyw
		+ 1] == FLOOR)
		move_right_enemy2(game);
	else if (i > 15 && i <= 20 && game->maps[game->content.y_enemyw
		+ 1][game->content.x_enemyw] == FLOOR)
		move_down_enemy2(game);
	else if (i > 20 && i <= 24 && game->maps[game->content.y_enemyw
		+ 1][game->content.x_enemyw] == FLOOR)
		move_down_enemy2(game);
	else if (i > 24 && i <= 30 && game->maps[game->content.y_enemyw
		- 1][game->content.x_enemyw] == FLOOR)
		move_top_enemy2(game);
	else
		move_enemy2_bis(i, game);
}
