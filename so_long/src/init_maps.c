/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_maps.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:44:21 by cballet           #+#    #+#             */
/*   Updated: 2024/04/15 11:04:04 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

void	init_header(char *str, t_game *game)
{
	char	*line;
	int		fd;
	char	*map_lined;

	fd = open(str, O_RDONLY);
	if (fd == -1 || fd == 0)
		print_error2("Error\nOpen header failed", game);
	map_lined = ft_strdup("");
	while (fd > 0)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		map_lined = ft_strjoin2(map_lined, line);
		free(line);
	}
	close(fd);
	printf("Header is : \n%s\n", map_lined);
	game->header = ft_split(map_lined);
	printf("Split header line 2 is : \n%s\n\n", game->header[1]);
	free(map_lined);
}

void	init_map(char *str, t_game *game)
{
	char	*line;
	int		fd;
	char	*map_lined;

	fd = open(str, O_RDONLY);
	if (fd == -1 || fd == 0)
		print_error2("Error\nOpen map failed", game);
	map_lined = ft_strdup("");
	while (fd > 0)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		map_lined = ft_strjoin2(map_lined, line);
		free(line);
	}
	close(fd);
	check_return_line(map_lined, game);
	printf("Map is : \n%s\n", map_lined);
	game->map = ft_split(map_lined);
	printf("Split map line 2 is : \n%s\n\n", game->map[1]);
	free(map_lined);
}
