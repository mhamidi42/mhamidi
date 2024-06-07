#include "so_long.h"

t_img	img_create(t_data info)
{
	t_img	img;
	int		height;
	int		width;

	img.empty = mlx_xpm_file_to_image(info.mlx, "img/empty.xpm", &width, &height);
	img.wall = mlx_xpm_file_to_image(info.mlx, "img/wall.xpm", &width, &height);
	img.player = mlx_xpm_file_to_image(info.mlx, "img/player.xpm", &width, &height);
	img.coin = mlx_xpm_file_to_image(info.mlx, "img/coin.xpm", &width, &height);
	img.exit = mlx_xpm_file_to_image(info.mlx, "img/exit.xpm", &width, &height);
	return (img);
}

void	bring_image(t_data info, t_img img, int i, int j)
{
	if (info.map[i][j] == '0')
		mlx_put_image_to_window(info.mlx, info.mlx_win, img.empty, j * 64, i * 64);
	if (info.map[i][j] == '1')
		mlx_put_image_to_window(info.mlx, info.mlx_win, img.wall, j * 64, i * 64);
	if (info.map[i][j] == 'P')
		mlx_put_image_to_window(info.mlx, info.mlx_win, img.player, j * 64, i * 64);
	if (info.map[i][j] == 'E')
		mlx_put_image_to_window(info.mlx, info.mlx_win, img.exit, j * 64, i * 64);
	if (info.map[i][j] == 'C')
		mlx_put_image_to_window(info.mlx, info.mlx_win, img.coin, j * 64, i * 64);
}

void	show_map(t_data info, t_img img)
{
	int	i;
	int	j;

	i = 0;
	while (info.map[i])
	{
		j = 0;
		while (info.map[i][j])
		{
			bring_image(info, img, i, j);
			j++;
		}
		i++;
	}
}

/* quand j'utilise mlx_loop_hook */

int	show_map2(t_data info, t_img img)
{
	int	i;
	int	j;

	i = 0;
	while (info.map[i] != NULL)
	{
		j = 0;
		while (info.map[i][j])
		{
			bring_image(info, img, i, j);
			j++;
		}
		i++;
	}
	return (0);
}

void map_size(char **map, int *i, int *j)
{
    // Initialiser *i à 0
    *i = 0;
    // Parcourir le tableau map jusqu'à trouver un pointeur NULL
    while (map[*i] != NULL)
        (*i)++;
    // Initialiser *j à 0
    *j = 0;
    // Parcourir la première ligne de map jusqu'à trouver la fin de la chaîne
    while (map[0][*j] != '\0')
        (*j)++;
    // Convertir les dimensions en pixels
    *i = *i * 64;
    *j = *j * 64;
}

int key_event(int keycode, t_data *game, t_img *img)
{
    // (void)param;
    if (keycode == XK_Escape) // 'Esc' key on Mac
		close_image(game, img);
	if (keycode == XK_W || keycode == XK_Up)
		game = up(game);
	if (keycode == XK_S || keycode == XK_Down)
		game = down(game);
	if (keycode == XK_D || keycode == XK_Right)
		game = right(game);
	if (keycode == XK_A || keycode == XK_Left)
		game = left(game);
	// show_map(*game, *img);
    return 0;
}

// Pour fermer la fenetre avec la croix
int close_event(t_data *game, t_img *img)
{
    // (void)param;
	close_image(game, img);
//    exit(0);
    return 0;
}

void	free_table(char **table)
{
	int	i;

	i = 0;
	while (table[i])
	{
		free(table[i]);
		i++;
	}
	free(table);
}

/*
W = TOUCHE DU HAUT
S = TOUCHE DU BAS
D = TOUCHE DROIT
A = TOUCHE GAUCHE
*/
