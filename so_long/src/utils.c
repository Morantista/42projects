/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 09:13:55 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 20:55:54 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"


char	*is_new(char *str)
{
	int		idx;
	char	*word;

	idx = 0;
	while (str[idx] != '\0')
		idx++;
	word = (char *)malloc(sizeof(char) * (idx + 1));
	if (!word)
		return (free_malloc(&word));
	idx = 0;
	while (str[idx] != '\0')
	{
		word[idx] = str[idx];
		idx++;
	}
	word[idx] = '\0';
	return (word);
}
int	count_collect(t_game *game)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (game->maps[i])
	{
		j = 0;
		while (game->maps[i][j])
		{
			if (game->maps[i][j] == COLLECT)
				c++;
			j++;
		}
		i++;
	}
	return (c);
}

void life_and_respawn(t_game *game)
{
	game->content.count_life--;
	game->maps[game->content.y_startp][game->content.x_startp] = PLAYER;
	if (game->content.count_life == 3)
		game->img.life_a_sprite = game->img.life_empty_sprite;
	if (game->content.count_life == 2)
		game->img.life_d_sprite = game->img.life_empty_sprite;
	if (game->content.count_life == 1)
		game->img.life_i_sprite = game->img.life_empty_sprite;
	if (game->content.count_life == 0)
	{
		game->img.life_v_sprite = game->img.life_empty_sprite;
		ft_printf("\nNOOOOOOOOOB!!!!!\nYOU LOSE\n");
		end_game(game);
	}

}



