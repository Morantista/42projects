/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:14:29 by cballet           #+#    #+#             */
/*   Updated: 2024/04/16 18:03:21 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	move_t(int move, t_game *game)
{
	if (move == 0)
		game->img.number_t_sprite = game->img.number_0_sprite;
	if (move == 1)
		game->img.number_t_sprite = game->img.number_1_sprite;
	if (move == 2)
		game->img.number_t_sprite = game->img.number_2_sprite;
	if (move == 3)
		game->img.number_t_sprite = game->img.number_3_sprite;
	if (move == 4)
		game->img.number_t_sprite = game->img.number_4_sprite;
	if (move == 5)
		game->img.number_t_sprite = game->img.number_5_sprite;
	if (move == 6)
		game->img.number_t_sprite = game->img.number_6_sprite;
	if (move == 7)
		game->img.number_t_sprite = game->img.number_7_sprite;
	if (move == 8)
		game->img.number_t_sprite = game->img.number_8_sprite;
	if (move == 9)
		game->img.number_t_sprite = game->img.number_9_sprite;
}

void	move_m(int move, t_game *game)
{
	if (move == 0)
		game->img.number_m_sprite = game->img.number_0_sprite;
	if (move == 1)
		game->img.number_m_sprite = game->img.number_1_sprite;
	if (move == 2)
		game->img.number_m_sprite = game->img.number_2_sprite;
	if (move == 3)
		game->img.number_m_sprite = game->img.number_3_sprite;
	if (move == 4)
		game->img.number_m_sprite = game->img.number_4_sprite;
	if (move == 5)
		game->img.number_m_sprite = game->img.number_5_sprite;
	if (move == 6)
		game->img.number_m_sprite = game->img.number_6_sprite;
	if (move == 7)
		game->img.number_m_sprite = game->img.number_7_sprite;
	if (move == 8)
		game->img.number_m_sprite = game->img.number_8_sprite;
	if (move == 9)
		game->img.number_m_sprite = game->img.number_9_sprite;
}

void	move_h(int move, t_game *game)
{
	if (move == 0)
		game->img.number_h_sprite = game->img.number_0_sprite;
	if (move == 1)
		game->img.number_h_sprite = game->img.number_1_sprite;
	if (move == 2)
		game->img.number_h_sprite = game->img.number_2_sprite;
	if (move == 3)
		game->img.number_h_sprite = game->img.number_3_sprite;
	if (move == 4)
		game->img.number_h_sprite = game->img.number_4_sprite;
	if (move == 5)
		game->img.number_h_sprite = game->img.number_5_sprite;
	if (move == 6)
		game->img.number_h_sprite = game->img.number_6_sprite;
	if (move == 7)
		game->img.number_h_sprite = game->img.number_7_sprite;
	if (move == 8)
		game->img.number_h_sprite = game->img.number_8_sprite;
	if (move == 9)
		game->img.number_h_sprite = game->img.number_9_sprite;
}

void	move_f(int move, t_game *game)
{
	if (move == 0)
		game->img.number_f_sprite = game->img.number_0_sprite;
	if (move == 1)
		game->img.number_f_sprite = game->img.number_1_sprite;
	if (move == 2)
		game->img.number_f_sprite = game->img.number_2_sprite;
	if (move == 3)
		game->img.number_f_sprite = game->img.number_3_sprite;
	if (move == 4)
		game->img.number_f_sprite = game->img.number_4_sprite;
	if (move == 5)
		game->img.number_f_sprite = game->img.number_5_sprite;
	if (move == 6)
		game->img.number_f_sprite = game->img.number_6_sprite;
	if (move == 7)
		game->img.number_f_sprite = game->img.number_7_sprite;
	if (move == 8)
		game->img.number_f_sprite = game->img.number_8_sprite;
	if (move == 9)
		game->img.number_f_sprite = game->img.number_9_sprite;
}

void	move_u(int move, t_game *game)
{
	if (move == 0)
		game->img.number_u_sprite = game->img.number_0_sprite;
	if (move == 1)
		game->img.number_u_sprite = game->img.number_1_sprite;
	if (move == 2)
		game->img.number_u_sprite = game->img.number_2_sprite;
	if (move == 3)
		game->img.number_u_sprite = game->img.number_3_sprite;
	if (move == 4)
		game->img.number_u_sprite = game->img.number_4_sprite;
	if (move == 5)
		game->img.number_u_sprite = game->img.number_5_sprite;
	if (move == 6)
		game->img.number_u_sprite = game->img.number_6_sprite;
	if (move == 7)
		game->img.number_u_sprite = game->img.number_7_sprite;
	if (move == 8)
		game->img.number_u_sprite = game->img.number_8_sprite;
	if (move == 9)
		game->img.number_u_sprite = game->img.number_9_sprite;
}
