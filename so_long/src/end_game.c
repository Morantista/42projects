/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_game.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:50:37 by cballet           #+#    #+#             */
/*   Updated: 2024/04/18 09:21:17 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	end_maps(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->img.floor_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.wall_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.exit_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.collect_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.letter_s_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.letter_o_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.letter_l_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.letter_n_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.letter_g_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.life_v_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.life_i_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.life_d_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.life_a_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_0_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_1_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_2_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_3_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_4_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_5_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_6_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_7_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_8_sprite);
	// mlx_destroy_image(game->mlx_ptr, game->img.number_9_sprite);
}

void	end_player(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->img.player_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.player_left_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.player_right_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.player_back_sprite);
}

void	end_enemy(t_game *game)
{
	mlx_destroy_image(game->mlx_ptr, game->img.enemy_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.enemy_right_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.enemy_left_sprite);
	mlx_destroy_image(game->mlx_ptr, game->img.enemy_back_sprite);
}

int	end_game(t_game *game)
{
	end_player(game);
	end_enemy(game);
	end_maps(game);
	free_malloc(game->maps);
	mlx_destroy_window(game->mlx_ptr, game->mlx_win);
	mlx_destroy_display(game->mlx_ptr);
	free(game->mlx_ptr);
	free(game);
	exit (1);
}
