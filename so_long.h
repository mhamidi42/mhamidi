#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libft/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <../mlx/mlx.h>
# include <X11/keysym.h>

# define PLAYER 'P'
# define WALL '1'
# define COIN 'C'
# define DOOR 'E'
# define EMPTY '0'
# define MLX_ERROR 1

# define WINDOW_WIDTH 1920
# define WINDOW_HEIGHT 1080

typedef struct s_data
{
	char	**map;
    void	*mlx;
    void	*mlx_win;
	int		x;
	int		y;
	int		nb_move;
}				t_data;

typedef	struct s_img
{
	/* data */
	void	*empty;
	void	*wall;
	void	*coin;
	void	*player;
	void	*exit;
}				t_img;

int		check_ber(char *str);
char	**getting_map(char *argv);
int		map_parsing(char **map);
int		map_wall_checker(char **map);
int		map_path_check(char **map);
void	display(char **map);
char 	**copy_map(char **map);
int		find_pos(char **map, char c, int *res_y, int *res_x);
int		handle_input(int keysym, t_data *data);
int		handle_no_event(void);
void	map_size(char **map, int *i, int *y);
void	game_on(char **map);
t_img	img_create(t_data info);
void	bring_image(t_data info, t_img img, int i, int j);
void	show_map(t_data info, t_img img);
int 	close_event(t_data *game, t_img *img);
int 	key_event(int keycode, t_data *game, t_img *img);
void	free_table(char **table);
void	close_image(t_data *game, t_img *img);
void	position_player(char **map, int *i, int *j);
t_data	*up(t_data *game);
t_data	*down(t_data *game);
t_data	*left(t_data *game);
t_data	*right(t_data *game);
int		coin_count(char **map);
int		show_map2(t_data info, t_img img);

#endif