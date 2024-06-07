#include "so_long.h"

void game_on(char **map)
{
    t_data game;
	t_img	img;
    game.map = map;
	game.nb_move = 0;
    game.mlx = mlx_init(); 
    if (game.mlx == NULL)
    {
        ft_putendl_fd("Error initializing MLX", 2);
        return;
    }
    map_size(map, &game.x, &game.y);
    game.mlx_win = mlx_new_window(game.mlx, game.y, game.x, "So_long");
    if (game.mlx_win == NULL)
    {
        ft_putendl_fd("Error creating window", 2);
        mlx_destroy_display(game.mlx_win);
        free(game.mlx_win);
        return;
    }
	img = img_create(game);
	show_map(game, img);
	mlx_key_hook(game.mlx_win, key_event, &game); // Key press events
    mlx_hook(game.mlx_win, 17, 0, close_event, &game); // Window close event
    mlx_loop_hook(game.mlx, show_map2, &game);
    mlx_loop(game.mlx);
}


/* That's the mlx_destroy_display function. We need to call it before the free function because we need access the mlx_ptr to retrieve the display variable. Now, we shouldn't have any leaks anymore. */
void	close_image(t_data *game, t_img *img) 
{
	 	/* pour detruire la window, je dois detruire toutes les images ca c'est rapide, 
 	et ensuite free le ptr_window, et et display_window */
 	// mlx_destroy_image(game->mlx, img->empty);
 	// mlx_destroy_image(game->mlx, img->wall);
 	// mlx_destroy_image(game->mlx, img->player);
 	// mlx_destroy_image(game->mlx, img->coin);
 	// mlx_destroy_image(game->mlx, img->exit);
	// /* la tu dois free la structure IMG, et ensuite free la map char ** donc fire un free_tab*/
	// mlx_destroy_window(game->mlx, game->mlx_win);
	// mlx_destroy_display(game->mlx);
	// free(game->mlx);
 	// free_tab(game->map);
	(void) game;
	(void) img;
 	exit(0);
}