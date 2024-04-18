/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cballet <cballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:07:35 by cballet           #+#    #+#             */
/*   Updated: 2024/04/17 21:15:35 by cballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100

# endif

# include "../libft/libft.h"
# include "../minilibx-linux/mlx.h"
# include <X11/X.h>
# include <X11/keysym.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

/*MAPS*/
# define WALL '1'
# define FLOOR '0'
# define PLAYER 'P'
# define EXIT 'E'
# define COLLECT 'C'
# define ENEMY 'X'
# define ENEMY_2 'W'
# define LIFE_1 'V'
# define LIFE_2 'I'
# define LIFE_3 'D'
# define LIFE_4 'A'
# define LETTER_1 'S'
# define LETTER_2 'O'
# define LETTER_3 'L'
# define LETTER_4 'N'
# define LETTER_5 'G'
# define NUMBER_T 'T'
# define NUMBER_M 'M'
# define NUMBER_H 'H'
# define NUMBER_F 'F'
# define NUMBER_U 'U'

# define HEADER "Maps/mapheader.ber"

# define WALL_XPM "./Asset/Textures/wallfinal.xpm"
# define FLOOR_XPM "./Asset/Textures/floorfinal.xpm"
# define EXIT_XPM "./Asset/Textures/exitfinal.xpm"
# define COLLECT_XPM "./Asset/Collects/collectfinal.xpm"

# define PLAYER_XPM "./Asset/Players/playerfinalface.xpm"
# define PLAYER_LEFT_XPM "./Asset/Players/playerfinalleft.xpm"
# define PLAYER_RIGHT_XPM "./Asset/Players/playerfinalright.xpm"
# define PLAYER_BACK_XPM "./Asset/Players/playerfinaldos.xpm"

# define ENEMY_XPM "./Asset/Enemies/Enemyface.xpm"
# define ENEMY_LEFT_XPM "./Asset/Enemies/Enemyleft.xpm"
# define ENEMY_RIGHT_XPM "./Asset/Enemies/Enemyright.xpm"
# define ENEMY_BACK_XPM "./Asset/Enemies/Enemydos.xpm"

# define LETTER_S_XPM "./Asset/Letters/S.xpm"
# define LETTER_O_XPM "./Asset/Letters/O.xpm"
# define LETTER_L_XPM "./Asset/Letters/L.xpm"
# define LETTER_N_XPM "./Asset/Letters/N.xpm"
# define LETTER_G_XPM "./Asset/Letters/G.xpm"

# define HEART_XPM "./Asset/Hearts/heart.xpm"
# define HEART_EMPTY_XPM "./Asset/Hearts/heart_empty.xpm"

# define NUMBER_0_XPM "./Asset/Numbers/0.xpm"
# define NUMBER_1_XPM "./Asset/Numbers/1.xpm"
# define NUMBER_2_XPM "./Asset/Numbers/2.xpm"
# define NUMBER_3_XPM "./Asset/Numbers/3.xpm"
# define NUMBER_4_XPM "./Asset/Numbers/4.xpm"
# define NUMBER_5_XPM "./Asset/Numbers/5.xpm"
# define NUMBER_6_XPM "./Asset/Numbers/6.xpm"
# define NUMBER_7_XPM "./Asset/Numbers/7.xpm"
# define NUMBER_8_XPM "./Asset/Numbers/8.xpm"
# define NUMBER_9_XPM "./Asset/Numbers/9.xpm"

# define ESCAPE 65307
# define W 119
# define S 115
# define A 97
# define D 100

typedef struct s_content
{
	int			count_move;
	int			count_life;
	int count_enemy;
	int			x;
	int			y;
	int			x_startp;
	int			y_startp;
	int			x_startx;
	int			y_startx;
	int			x_startw;
	int			y_startw;
	int			x_enemyx;
	int			y_enemyx;
	int			x_enemyw;
	int			y_enemyw;
}				t_content;

typedef struct s_win
{
	int			win_width;
	int			win_height;
}				t_win;

typedef struct s_img
{
	int			width;
	int			height;
	void		*collect_sprite;
	void		*enemy_sprite;
	void		*enemy_main_sprite;
	void		*enemy2_main_sprite;
	void		*enemy_left_sprite;
	void		*enemy_right_sprite;
	void		*enemy_back_sprite;
	void		*exit_sprite;
	void		*floor_sprite;
	void		*letter_s_sprite;
	void		*letter_o_sprite;
	void		*letter_l_sprite;
	void		*letter_n_sprite;
	void		*letter_g_sprite;
	void		*life_sprite;
	void		*life_v_sprite;
	void		*life_i_sprite;
	void		*life_d_sprite;
	void		*life_a_sprite;
	void		*life_empty_sprite;
	void		*number_0_sprite;
	void		*number_1_sprite;
	void		*number_2_sprite;
	void		*number_3_sprite;
	void		*number_4_sprite;
	void		*number_5_sprite;
	void		*number_6_sprite;
	void		*number_7_sprite;
	void		*number_8_sprite;
	void		*number_9_sprite;
	void		*number_t_sprite;
	void		*number_m_sprite;
	void		*number_h_sprite;
	void		*number_f_sprite;
	void		*number_u_sprite;
	void		*player_sprite;
	void		*player_main_sprite;
	void		*player_right_sprite;
	void		*player_left_sprite;
	void		*player_back_sprite;
	void		*wall_sprite;
	void		*xpm_ptr;

}				t_img;

typedef struct s_game
{
	void		*mlx_img;
	char		*addr;
	char		**map;
	char		**maps;
	char		**header;
	t_win		win;
	t_img		img;
	t_content	content;
	int			count;
	void		*mlx_ptr;
	void		*mlx_win;

}				t_game;

/*UTILS*/
int				close(int keycode);
void			my_mlx_pixel_put(t_game *data, int x, int y, int color);
int				key_hook(int keycode);
void			*print_error(char *str, t_game *map);
void			*print_error2(char *str, t_game *game);
void			*assign_sprites(void *mlx_ptr, char *path, t_game *game);
int				close_map(t_game *game);
void			count_and_print(t_game *game);
char			*is_new(char *str);
char			*free_malloc(char **s);
int				count_collect(t_game *game);
void			life_and_respawn(t_game *game);
int				check_out_y(t_game *game, int y, int x);
int				check_out_x(t_game *game, int y, int x);

void			check_return_line(char *str, t_game *game);

/*INIT MAPS*/
void			init_map(char *str, t_game *game);
void			init_header(char *str, t_game *game);

/*CHECK MAPS*/
int				count_height(char **map);
int				check_size(t_game *game);
int				check_outline(t_game *game);
int				check_format(t_game *game);
int				check_map(t_game *game);
int				check_header(t_game *game);
void			check_return_line(char *str, t_game *game);

/*CHECK ARGV*/
int				check_argv(int argc, char **argv, t_game *game);

/*SET*/
void			set_content(t_game *game);
void			set_win(t_game *game);
void			set_sprites(t_game *game);
int				set_index_player(t_game *game);
int				set_index_enemy(t_game *game);
int				set_index_enemy2(t_game *game);
int				set_index_start(char c, t_game *game);
void			set_new_map(t_game *game);
int				set_index_start_player(t_game *game);
int				set_index_start_enemy(t_game *game);
int				set_index_start_enemy2(t_game *game);

/*SET SPRITES*/
void			set_sprites(t_game *game);
void			set_sprites1(t_game *game);
void			set_sprites2(t_game *game);
void			set_sprites3(t_game *game);
void			set_sprites4(t_game *game);
/*MLX*/
void			init_mlx(t_game *game);
int				init_sprites_map(t_game *game);

/*INIT SPRITES */
void			wich_sprite_maps1(char *str, int y, int x, t_game *game);
void			wich_sprite_maps1(char *str, int y, int x, t_game *game);
void			wich_sprite_maps2(char *str, int y, int x, t_game *game);
void			wich_sprite_maps3(char *str, int y, int x, t_game *game);

/*MOVE*/
void			move_right_player(t_game *game);
void			move_left_player(t_game *game);
void			move_top_player(t_game *game);
void			move_down_player(t_game *game);
void			move_right_enemy(t_game *game);
void			move_left_enemy(t_game *game);
void			move_top_enemy(t_game *game);
void			move_down_enemy(t_game *game);
void			move_right_enemy2(t_game *game);
void			move_left_enemy2(t_game *game);
void			move_top_enemy2(t_game *game);
void			move_down_enemy2(t_game *game);
void	move_enemy(int i, t_game *game);
void	move_enemy_bis(int i, t_game *game);
void	move_enemy2(int i, t_game *game);
void	move_enemy2_bis(int i, t_game *game);
void			move_t(int move, t_game *game);
void			move_m(int move, t_game *game);
void			move_h(int move, t_game *game);
void			move_f(int move, t_game *game);
void			move_u(int move, t_game *game);
int				move_keyboard(int keycode, t_game *game);

/*END GAME*/
int				end_game(t_game *game);

void			ft_index(t_game *game, char c, int k);
#endif
