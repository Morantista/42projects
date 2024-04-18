/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_enemy_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:14:01 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 20:48:09 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move_right_enemy(t_game *game)
{
	set_index_enemy(game);
	printf("%d\n", game->content.y_enemyx);
	printf("%d\n", game->content.x_enemyx);
	if (game->maps[game->content.y_enemyx][game->content.x_enemyx + 1] == FLOOR)
	{
		game->maps[game->content.y_enemyx][game->content.x_enemyx + 1] = ENEMY;
		game->maps[game->content.y_enemyx][game->content.x_enemyx] = FLOOR;
		game->img.enemy_main_sprite = game->img.enemy_right_sprite;

		init_sprites_map(game);
	}
	if (game->maps[game->content.y_enemyx][game->content.x_enemyx
		+ 1] == PLAYER)
	{
		game->maps[game->content.y_enemyx][game->content.x_enemyx] = FLOOR;
		game->maps[game->content.y_enemyx][game->content.x_enemyx + 1] = ENEMY;
		life_and_respawn(game);
	}
}

void	move_left_enemy(t_game *game)
{
	set_index_enemy(game);
	if (game->maps[game->content.y_enemyx][game->content.x_enemyx - 1] == FLOOR)
	{
		game->maps[game->content.y_enemyx][game->content.x_enemyx - 1] = ENEMY;
		game->maps[game->content.y_enemyx][game->content.x_enemyx] = FLOOR;
		game->img.enemy_main_sprite = game->img.enemy_left_sprite;

		init_sprites_map(game);
	}
	if (game->maps[game->content.y_enemyx][game->content.x_enemyx
		- 1] == PLAYER)
	{
		game->maps[game->content.y_enemyx][game->content.x_enemyx + 1] = ENEMY;
		game->maps[game->content.y_enemyx][game->content.x_enemyx] = FLOOR;
		life_and_respawn(game);
	}
}

void	move_top_enemy(t_game *game)
{
	set_index_enemy(game);
	if (game->maps[game->content.y_enemyx - 1][game->content.x_enemyx] == FLOOR)
	{
		game->maps[game->content.y_enemyx - 1][game->content.x_enemyx] = ENEMY;
		game->maps[game->content.y_enemyx][game->content.x_enemyx] = FLOOR;
		game->img.enemy_main_sprite = game->img.enemy_back_sprite;

		init_sprites_map(game);
	}
	if (game->maps[game->content.y_enemyx
		- 1][game->content.x_enemyx] == PLAYER)
	{
		game->maps[game->content.y_enemyx][game->content.x_enemyx + 1] = ENEMY;
		game->maps[game->content.y_enemyx][game->content.x_enemyx] = FLOOR;
		life_and_respawn(game);
	}
}

void	move_down_enemy(t_game *game)
{
	set_index_enemy(game);
	if (game->maps[game->content.y_enemyx + 1][game->content.x_enemyx] == FLOOR)
	{
		game->maps[game->content.y_enemyx + 1][game->content.x_enemyx] = ENEMY;
		game->maps[game->content.y_enemyx][game->content.x_enemyx] = FLOOR;
		game->img.enemy_main_sprite = game->img.enemy_sprite;

		init_sprites_map(game);
	}
	if (game->maps[game->content.y_enemyx
		+ 1][game->content.x_enemyx] == PLAYER)
	{
		game->maps[game->content.y_enemyx][game->content.x_enemyx + 1] = ENEMY;
		game->maps[game->content.y_enemyx][game->content.x_enemyx] = FLOOR;
		life_and_respawn(game);
	}
}
