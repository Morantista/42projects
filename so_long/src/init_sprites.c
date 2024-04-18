/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sprites.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 17:13:04 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 14:46:10 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// void	wich_sprite_maps(char *line, int y, t_game *game)
// {
// 	int	x;

// 	x = 0;
// 	while (line[x])
// 	{
// 		if (game->maps[y][x] == WALL)
// 			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
// 				game->img.wall_sprite, x * 50, y * 50);
// 		else if (game->maps[y][x] == FLOOR)
// 			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
// 				game->img.floor_sprite, x * 50, y * 50);
// 		else if (game->maps[y][x] == PLAYER)
// 			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
// 				game->img.player_main_sprite, x * 50, y * 50);
// 		else if (game->maps[y][x] == COLLECT)
// 			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
// 				game->img.collect_sprite, x * 50, y * 50);
// 		else if (game->maps[y][x] == EXIT)
// 			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
// 				game->img.exit_sprite, x * 50, y * 50);
// 		x++;
// 	}
// }

// void	init_sprites_maps(t_game *game)
// {
// 	int	y;
// 	int	x;

// 	y = 0;
// 	while (game->maps[y] != NULL)
// 	{
// 		x = 0;
// 		while (game->maps[y][x])
// 		{
// 			x++;
// 		}
// 		y++;
// 	}
// }
void	wich_sprite_maps(char *str, int y, t_game *game)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == WALL)
			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
				game->img.wall_sprite, x * 50, y * 50);
		else if (str[x] == FLOOR)
			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
				game->img.floor_sprite, x * 50, y * 50);
		else if (str[x] == PLAYER)
			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
				game->img.player_main_sprite, x * 50, y * 50);
		else if (str[x] == COLLECT)
			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
				game->img.collect_sprite, x * 50, y * 50);
		else if (str[x] == EXIT)
			mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
				game->img.exit_sprite, x * 50, y * 50);
		else
			wich_sprite_maps1(str, y, x, game);
		x++;
	}
}

void	wich_sprite_maps1(char *str, int y, int x, t_game *game)
{
	if (str[x] == LIFE_1)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.life_v_sprite, x * 50, y * 50);
	else if (str[x] == LIFE_2)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.life_i_sprite, x * 50, y * 50);
	else if (str[x] == LIFE_3)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.life_d_sprite, x * 50, y * 50);
	else if (str[x] == LIFE_4)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.life_a_sprite, x * 50, y * 50);
	else if (str[x] == ENEMY)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.enemy_main_sprite, x * 50, y * 50);
	else if (str[x] == ENEMY_2)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.enemy_main_sprite, x * 50, y * 50);
	else
		wich_sprite_maps2(str, y, x, game);
}

void	wich_sprite_maps2(char *str, int y, int x, t_game *game)
{
	if (str[x] == LETTER_1)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.letter_s_sprite, x * 50, y * 50);
	else if (str[x] == LETTER_2)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.letter_o_sprite, x * 50, y * 50);
	else if (str[x] == LETTER_3)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.letter_l_sprite, x * 50, y * 50);
	else if (str[x] == LETTER_4)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.letter_n_sprite, x * 50, y * 50);
	else if (str[x] == LETTER_5)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.letter_g_sprite, x * 50, y * 50);
	else
		wich_sprite_maps3(str, y, x, game);
}

void	wich_sprite_maps3(char *str, int y, int x, t_game *game)
{
	if (str[x] == NUMBER_T)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.number_t_sprite, x * 50, y * 50);
	else if (str[x] == NUMBER_M)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.number_m_sprite, x * 50, y * 50);
	else if (str[x] == NUMBER_H)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.number_h_sprite, x * 50, y * 50);
	else if (str[x] == NUMBER_F)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.number_f_sprite, x * 50, y * 50);
	else if (str[x] == NUMBER_U)
		mlx_put_image_to_window(game->mlx_ptr, game->mlx_win,
			game->img.number_u_sprite, x * 50, y * 50);
}

int	init_sprites_map(t_game *game)
{
	int	y;

	y = 0;
	while (game->maps[y] != NULL)
	{
		wich_sprite_maps(game->maps[y], y, game);
		y++;

	}
	return (0);
}

