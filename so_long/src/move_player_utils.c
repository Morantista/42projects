/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_player_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:09:53 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 11:40:53 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move_right_player(t_game *game)
{
	set_index_player(game);
	printf("%d\n", game->content.y);
	printf("%d\n", game->content.x);
	if (game->maps[game->content.y][game->content.x + 1] == FLOOR || game->maps[game->content.y][game->content.x
		+ 1] == COLLECT)
	{
		game->maps[game->content.y][game->content.x + 1] = PLAYER;
		game->maps[game->content.y][game->content.x] = FLOOR;
		game->img.player_main_sprite = game->img.player_right_sprite;
		printf("la new line de maps est %s\n", game->maps[14]);
		count_and_print(game);
	}
	if (game->maps[game->content.y][game->content.x + 1] == EXIT && count_collect(game) == 0)
	{
		count_and_print(game);
		ft_printf("YOU WIN\n");
		end_game(game);
		exit(1);
	}
	printf("le nombre de collect est %d\n", count_collect(game));
	if (game->maps[game->content.y][game->content.x + 1] == ENEMY || game->maps[game->content.y][game->content.x + 1] == ENEMY_2)
	{
		game->maps[game->content.y][game->content.x] = FLOOR;
		life_and_respawn(game);
	}
}

void	move_left_player(t_game *game)
{
	set_index_player(game);
	if (game->maps[game->content.y][game->content.x - 1] == FLOOR || game->maps[game->content.y][game->content.x
		- 1] == COLLECT)
	{
		game->maps[game->content.y][game->content.x - 1] = PLAYER;
		game->maps[game->content.y][game->content.x] = FLOOR;
		game->img.player_main_sprite = game->img.player_left_sprite;
		count_and_print(game);
	}
	if (game->maps[game->content.y][game->content.x - 1] == EXIT && count_collect(game) == 0)
	{
		count_and_print(game);
		ft_printf("YOU WIN\n");
		end_game(game);
		exit(1);
	}
	if (game->maps[game->content.y][game->content.x - 1] == ENEMY || game->maps[game->content.y][game->content.x - 1] == ENEMY_2)
	{
		game->maps[game->content.y][game->content.x] = FLOOR;
		life_and_respawn(game);
	}
}

void	move_top_player(t_game *game)
{
	set_index_player(game);
	if (game->maps[game->content.y - 1][game->content.x] == FLOOR || game->maps[game->content.y
		- 1][game->content.x] == COLLECT)
	{
		game->maps[game->content.y - 1][game->content.x] = PLAYER;
		game->maps[game->content.y][game->content.x] = FLOOR;
		game->img.player_main_sprite = game->img.player_back_sprite;
		count_and_print(game);
	}
	if (game->maps[game->content.y - 1][game->content.x] == EXIT && count_collect(game) == 0)
	{
		count_and_print(game);
		ft_printf("YOU WIN\n");
		end_game(game);
		exit(1);
	}
	if (game->maps[game->content.y - 1][game->content.x] == ENEMY || game->maps[game->content.y - 1][game->content.x] == ENEMY_2)
	{
		game->maps[game->content.y][game->content.x] = FLOOR;
		life_and_respawn(game);
	}
}

void	move_down_player(t_game *game)
{
	set_index_player(game);
	if (game->maps[game->content.y + 1][game->content.x] == FLOOR || game->maps[game->content.y
		+ 1][game->content.x] == COLLECT)
	{
		game->maps[game->content.y + 1][game->content.x] = PLAYER;
		game->maps[game->content.y][game->content.x] = FLOOR;
		game->img.player_main_sprite = game->img.player_sprite;
		count_and_print(game);
	}
	if (game->maps[game->content.y + 1][game->content.x] == EXIT && count_collect(game) == 0)
	{
		count_and_print(game);
		ft_printf("YOU WIN\n");
		end_game(game);
		exit(1);
	}
	if (game->maps[game->content.y + 1][game->content.x] == ENEMY || game->maps[game->content.y + 1][game->content.x] == ENEMY_2)
	{
		game->maps[game->content.y][game->content.x] = FLOOR;
		life_and_respawn(game);
	}
}
