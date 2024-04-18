/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mlx.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 08:50:46 by cballet           #+#    #+#             */
/*   Updated: 2024/04/18 09:05:47 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	init_mlx(t_game *game)
{
	game->mlx_ptr = mlx_init();
	if (game->mlx_ptr == NULL)
	{
		free(game->mlx_ptr);
		print_error("Error\nFail mlx init\n", game);
	}
	game->mlx_win = mlx_new_window(game->mlx_ptr, game->win.win_width, game->win.win_height, "game name");
	// game->mlx_win = mlx_new_window(game->mlx_ptr, 1500, 500, "game name");
	if (game->mlx_win == NULL)
	{
		free(game->mlx_ptr);
		print_error("Error\nFail new windows\n", game);
	}











}
