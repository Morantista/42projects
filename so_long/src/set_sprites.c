/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_sprites.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:56:37 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 14:45:27 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	set_sprites1(t_game *game)
{
	game->img.width = 50;
	game->img.height = 50;
	game->img.wall_sprite = mlx_xpm_file_to_image(game->mlx_ptr, WALL_XPM,
			&game->img.width, &game->img.height);
	game->img.floor_sprite = mlx_xpm_file_to_image(game->mlx_ptr, FLOOR_XPM,
			&game->img.width, &game->img.height);
	game->img.exit_sprite = mlx_xpm_file_to_image(game->mlx_ptr, EXIT_XPM,
			&game->img.width, &game->img.height);
	game->img.collect_sprite = mlx_xpm_file_to_image(game->mlx_ptr, COLLECT_XPM,
			&game->img.width, &game->img.height);
	game->img.player_sprite = mlx_xpm_file_to_image(game->mlx_ptr, PLAYER_XPM,
			&game->img.width, &game->img.height);
	game->img.player_main_sprite = game->img.player_sprite;
	game->img.player_left_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			PLAYER_LEFT_XPM, &game->img.width, &game->img.height);
	game->img.player_right_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			PLAYER_RIGHT_XPM, &game->img.width, &game->img.height);
	game->img.player_back_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			PLAYER_BACK_XPM, &game->img.width, &game->img.height);
}

void	set_sprites2(t_game *game)
{
	game->img.enemy_sprite = mlx_xpm_file_to_image(game->mlx_ptr, ENEMY_XPM,
			&game->img.width, &game->img.height);
	game->img.enemy_main_sprite = game->img.enemy_sprite;
	game->img.enemy2_main_sprite = game->img.enemy_sprite;
	game->img.enemy_left_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			ENEMY_LEFT_XPM, &game->img.width, &game->img.height);
	game->img.enemy_right_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			ENEMY_RIGHT_XPM, &game->img.width, &game->img.height);
	game->img.enemy_back_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			ENEMY_BACK_XPM, &game->img.width, &game->img.height);
	game->img.letter_s_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			LETTER_S_XPM, &game->img.width, &game->img.height);
	game->img.letter_o_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			LETTER_O_XPM, &game->img.width, &game->img.height);
	game->img.letter_l_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			LETTER_L_XPM, &game->img.width, &game->img.height);
	game->img.letter_n_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			LETTER_N_XPM, &game->img.width, &game->img.height);
	game->img.letter_g_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			LETTER_G_XPM, &game->img.width, &game->img.height);
}

void	set_sprites3(t_game *game)
{
	game->img.number_0_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_0_XPM, &game->img.width, &game->img.height);
	game->img.number_1_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_1_XPM, &game->img.width, &game->img.height);
	game->img.number_t_sprite = game->img.number_0_sprite;
	game->img.number_m_sprite = game->img.number_0_sprite;
	game->img.number_h_sprite = game->img.number_0_sprite;
	game->img.number_f_sprite = game->img.number_0_sprite;
	game->img.number_u_sprite = game->img.number_0_sprite;
	game->img.number_2_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_2_XPM, &game->img.width, &game->img.height);
	game->img.number_3_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_3_XPM, &game->img.width, &game->img.height);
	game->img.number_4_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_4_XPM, &game->img.width, &game->img.height);
	game->img.number_5_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_5_XPM, &game->img.width, &game->img.height);
	game->img.number_6_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_6_XPM, &game->img.width, &game->img.height);
	game->img.number_7_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_7_XPM, &game->img.width, &game->img.height);
	game->img.number_8_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_8_XPM, &game->img.width, &game->img.height);
	game->img.number_9_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			NUMBER_9_XPM, &game->img.width, &game->img.height);
}

void	set_sprites4(t_game *game)
{
	game->img.life_sprite = mlx_xpm_file_to_image(game->mlx_ptr, HEART_XPM,
			&game->img.width, &game->img.height);
	game->img.life_v_sprite = game->img.life_sprite;
	game->img.life_i_sprite = game->img.life_sprite;
	game->img.life_d_sprite = game->img.life_sprite;
	game->img.life_a_sprite = game->img.life_sprite;
	game->img.life_empty_sprite = mlx_xpm_file_to_image(game->mlx_ptr,
			HEART_EMPTY_XPM, &game->img.width, &game->img.height);
}

void set_sprites(t_game *game)
{
	set_sprites1(game);
	set_sprites2(game);
	set_sprites3(game);
	set_sprites4(game);
}
