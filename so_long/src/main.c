/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:30:12 by cballet           #+#    #+#             */
/*   Updated: 2024/04/18 09:06:15 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// int	main(void)
// {
// 	void	*mlx_ptr;
// 	void	*win_ptr;
// 	void	*img_ptr;
// 	int		img_width;
// 	int		img_height;
// 	char *wall;
// 	int	i;
// 	int	j;

// 	wall = "Texture/wall2.xpm";
// 	img_width = 50;
// 	img_height = 50;
// 	mlx_ptr = mlx_init();
// 	printf("ok1\n");
// 	win_ptr = mlx_new_window(mlx_ptr, WIN_WIDTH, WIN_HEIGHT, "windows");
// 	printf("ok1\n");
// 	img_ptr = mlx_xpm_file_to_image(mlx_ptr, wall, &img_width,
// 			&img_height);
// 	printf("%p\n", img_ptr);
// 	if (!img_ptr)
// 		printf("KO\n");
// 	if (img_ptr == NULL)
// 	{
// 		printf("ok4\n");
// 		printf("Erreur : Impossible de charger l'image.\n");
// 		return (1);
// 	}
// 	i = 0;
// 	j = 0;
// 	mlx_put_image_to_window(mlx_ptr, win_ptr, img_ptr, i, j);

// 	printf("ok1\n");
// 	mlx_loop(mlx_ptr);
// 	printf("ok1\n");
// 	return (0);
// }

// int	main(void)
// {
// 	t_vars	vars;
// 	char	*wall_path;
// 	void	*img;
// 	int		width;
// 	int		height;
// 	int		i;
// 	int		j;

// 	i = 0;
// 	j = 0;
// 	wall_path = "src/Texture/wall2.xpm";
// 	vars.mlx = mlx_init();
// 	printf("ok1\n");
// 	vars.win = mlx_new_window(vars.mlx, 600, 600, "Windows");
// 	printf("ok1\n");
// 	width = 50;
// 	height = 50;
// 	img = mlx_xpm_file_to_image(vars.mlx, wall_path, &width, &height);
// 	printf("ok1\n");
// 	if (!img)
// 		printf("KO\n");
// 	mlx_put_image_to_window(vars.mlx, vars.win, img, i, j);
// 	printf("ok1\n");

// 	mlx_loop(vars.mlx);
// 	return (0);
// }

// int		i;
// int		j;
// i = 0;
// j = 0;
int	main(int argc, char **argv)
{
	t_game	*game;

	(void) argv;
	(void) argc;
	game = malloc(sizeof(t_game));
	check_argv(argc, argv, game);
	init_map(argv[1], game);
	check_map(game);
	init_header(HEADER, game);
	check_header(game);
	set_win(game);
	set_new_map(game);
	free_malloc(game->map);
	free_malloc(game->header);
	init_mlx(game);
	set_sprites(game);
	init_sprites_map(game);
	set_content(game);
	mlx_loop_hook(game->mlx_ptr, init_sprites_map, game);
	printf("la line de map est %s\n", game->maps[14]);
	mlx_hook(game->mlx_win, KeyPress, KeyPressMask, move_keyboard, game);
	mlx_hook(game->mlx_win, DestroyNotify, KeyPressMask, end_game, game);
	// mlx_hook(game->mlx_win, Expose, ExposureMask, init_sprites_map, game);
	// mlx_hook(game->mlx_win, KeyPress, 0, move_keyboard, game);
	mlx_loop(game->mlx_ptr);
	print_error("fermeture du programme", game);
	free_malloc(game->maps);
	free(game);
}

// CREER UNE FONCTION QUI ENLEVE DE LA VIE ET RESPAWN
