/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 08:51:24 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 19:35:53 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	set_content(t_game *game)
{
	game->content.count_life = 4;
	game->content.count_move = 0;
	game->content.count_enemy = 0;
	printf("count.enemy  1 est de = %d\n", game->content.count_enemy);
	set_index_start_player(game);
	printf("set start x P %d\n", game->content.x_startp);
	printf("set start y P %d\n", game->content.y_startp);
	set_index_start_enemy(game);
	printf("set start x X %d\n", game->content.x_startx);
	printf("set start y X %d\n", game->content.y_startx);
	set_index_start_enemy2(game);
	printf("set start x W %d\n", game->content.x_startw);
	printf("set start y W %d\n", game->content.y_startw);
}

void	set_win(t_game *game)
{
	game->win.win_width = ft_strlen(game->map[0]) * 50;
	if (game->win.win_width > INT_MAX || game->win.win_width < INT_MIN)
		print_error("Error\nSize window width\n", game);
	printf("Window whidth : \n%d\n", game->win.win_width);
	game->win.win_height = ((count_height(game->map) + count_height(game->header))* 50);
	if (game->win.win_height > INT_MAX || game->win.win_height < INT_MIN)
		print_error("Error\nSize window width\n", game);
	printf("Window height : \n%d\n", game->win.win_height);
}

void	set_new_map(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	game->maps = (char **)malloc(sizeof(char) * (game->win.win_height )+ 1);
	if (!game->maps)
		exit(1);
	while (game->header[i] != NULL)
	{
		game->maps[i] = is_new(game->header[i]);
		printf("New maps is :\n%s\n", game->maps[i]);
		i++;
	}
	j = 0;
	while (game->map[j] != NULL)
	{
		game->maps[i] = is_new(game->map[j]);
		printf("New maps is :\n%s\n", game->maps[i]);
		j++;
		i++;
	}
	game->maps[i] = NULL;
}








