/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:56:45 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 21:07:22 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

int	move_keyboard(int keycode, t_game *game)
{
	if (keycode == W)

		move_top_player(game);

	else if (keycode == S)

		move_down_player(game);

	else if (keycode == A)

		move_left_player(game);

	else if (keycode == D)

		move_right_player(game);

	else if (keycode == ESCAPE)
	{
		end_game(game);
		return (0);
	}
	if (keycode)
	{
		game->content.count_enemy++;
		move_enemy(game->content.count_enemy, game);
		move_enemy2(game->content.count_enemy, game);
		if (game->content.count_enemy > 50)
			game->content.count_enemy = 0;
	}
	printf("la valeur de i est %d\n", game->content.count_enemy);
	// if (keycode)
	// {
	// 	i++;
	// 	move_enemy(game);
	// 	printf("la valeur de i est %d\n", i);
	// }
	return (1);
}

void	print_move(int move, t_game *game)
{
	move_u(move % 10, game);
	if (move > 9)
		move_f((move / 10) % 10, game);
	if (move > 99)
		move_h(((move / 10) / 10) % 10, game);
	if (move > 999)
		move_m((((move / 10) / 10) / 10) % 10, game);
	if (move > 9999)
		move_t(((((move / 10) / 10) / 10) / 10) % 10, game);
}

void	count_and_print(t_game *game)
{
	game->content.count_move += 1;
	ft_printf("Tu as fait %d pas \n", game->content.count_move);
	print_move(game->content.count_move, game);
	init_sprites_map(game);
}
