/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemy2_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:56:48 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 21:11:20 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move_right_enemy2(t_game *game)
{
	set_index_enemy2(game);
	printf("%d\n", game->content.y_enemyw);
	printf("%d\n", game->content.x_enemyw);
	if (game->maps[game->content.y_enemyw][game->content.x_enemyw + 1] == FLOOR)
	{
		game->maps[game->content.y_enemyw][game->content.x_enemyw + 1] = ENEMY_2;
		game->maps[game->content.y_enemyw][game->content.x_enemyw] = FLOOR;
		game->img.enemy_main_sprite = game->img.enemy_right_sprite;

		init_sprites_map(game);
	}
	if (game->maps[game->content.y_enemyw][game->content.x_enemyw
		+ 1] == PLAYER)
	{
		game->maps[game->content.y_enemyw][game->content.x_enemyw] = FLOOR;
		game->maps[game->content.y_enemyw][game->content.x_enemyw + 1] = ENEMY_2;
		life_and_respawn(game);
	}
}

void	move_left_enemy2(t_game *game)
{
	set_index_enemy2(game);
	if (game->maps[game->content.y_enemyw][game->content.x_enemyw - 1] == FLOOR)
	{
		game->maps[game->content.y_enemyw][game->content.x_enemyw - 1] = ENEMY_2;
		game->maps[game->content.y_enemyw][game->content.x_enemyw] = FLOOR;
		game->img.enemy_main_sprite = game->img.enemy_left_sprite;

		init_sprites_map(game);
	}
	if (game->maps[game->content.y_enemyw][game->content.x_enemyw
		- 1] == PLAYER)
	{
		game->maps[game->content.y_enemyw][game->content.x_enemyw + 1] = ENEMY_2;
		game->maps[game->content.y_enemyw][game->content.x_enemyw] = FLOOR;
		life_and_respawn(game);
	}
}

void	move_top_enemy2(t_game *game)
{
	set_index_enemy2(game);
	if (game->maps[game->content.y_enemyw - 1][game->content.x_enemyw] == FLOOR)
	{
		game->maps[game->content.y_enemyw - 1][game->content.x_enemyw] = ENEMY_2;
		game->maps[game->content.y_enemyw][game->content.x_enemyw] = FLOOR;
		game->img.enemy_main_sprite = game->img.enemy_back_sprite;

		init_sprites_map(game);
	}
	if (game->maps[game->content.y_enemyw
		- 1][game->content.x_enemyw] == PLAYER)
	{
		game->maps[game->content.y_enemyw][game->content.x_enemyw + 1] = ENEMY_2;
		game->maps[game->content.y_enemyw][game->content.x_enemyw] = FLOOR;
		life_and_respawn(game);
	}
}

void	move_down_enemy2(t_game *game)
{
	set_index_enemy2(game);
	if (game->maps[game->content.y_enemyw + 1][game->content.x_enemyw] == FLOOR)
	{
		game->maps[game->content.y_enemyw + 1][game->content.x_enemyw] = ENEMY_2;
		game->maps[game->content.y_enemyw][game->content.x_enemyw] = FLOOR;
		game->img.enemy_main_sprite = game->img.enemy_sprite;

		init_sprites_map(game);
	}
	if (game->maps[game->content.y_enemyw
		+ 1][game->content.x_enemyw] == PLAYER)
	{
		game->maps[game->content.y_enemyw][game->content.x_enemyw + 1] = ENEMY_2;
		game->maps[game->content.y_enemyw][game->content.x_enemyw] = FLOOR;
		life_and_respawn(game);
	}
}

