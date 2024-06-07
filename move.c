#include "so_long.h"

t_data	*up(t_data *game)
{

	position_player(game->map, &game->x, &game->y);
	printf("PARTIE 1 : \n");
	display(game->map);
	if (game->map[game->x - 1][game->y] == '1') // WALL
		return (game); // ca retourne toujours sur la game
	if (game->map[game->x - 1][game->y] == '0')// EMPTY
	{
		game->map[game->x - 1][game->y] = 'P';
		game->map[game->x][game->y] = '0';
		game->nb_move++;
		return (game);
	}
	printf("PARTIE 2 : \n");
	display(game->map);
	// if (game->map[game->x - 1][game->y] == 'E') // EXIT
	// {
	// 	  if (coin_count(game->map) == 0)
	// 	  {
	// 		game->nb_move++;
	// 		exit(0);
	// 	  }
	// 	  else
	// 	  	return (game); // ca retorune toujours sur la game
	// }
	// if (game->map[game->x - 1][game->y] == 'C') // COIN
	// {
	// 	game->map[game->x - 1][game->y] = 'P';
	// 	game->map[game->x][game->y] = '0';
	// 	game->nb_move++;
	// 	// faire baisser le compteur du coin
	// }
	return (game);
}

t_data	*down(t_data *game)
{

	position_player(game->map, &game->x, &game->y);
	printf("PARTIE 1 : \n");
	display(game->map);
	// if (game->map[game->x + 1][game->y] == '1') // WALL
	// 	return (game); // ca retourne toujours sur la game
	if (game->map[game->x + 1][game->y] == '0')// EMPTY
	{
		game->map[game->x + 1][game->y] = 'P';
		game->map[game->x][game->y] = '0';
		game->nb_move++;
		return (game);
	}
	printf("PARTIE 2 : \n");
	display(game->map);
	// if (game->map[game->x + 1][game->y] == 'E') // EXIT
	// {
	// 	  if (coin_count(game->map) == 0)
	// 	  {
	// 		game->nb_move++;
	// 		exit(0);
	// 	  }
	// 	  else
	// 	  	return (game); // ca retorune toujours sur la game
	// }
	// if (game->map[game->x + 1][game->y] == 'C') // COIN
	// {
	// 	game->map[game->x + 1][game->y] = 'P';
	// 	game->map[game->x][game->y] = '0';
	// 	game->nb_move++;
	// 	// faire baisser le compteur du coin
	// }
	return (game);
}

t_data	*right(t_data *game)
{

	position_player(game->map, &game->x, &game->y);
	printf("PARTIE 1 : \n");
	display(game->map);
	// if (game->map[game->x][game->y + 1] == '1') // WALL
	// 	return (game); // ca retourne toujours sur la game
	if (game->map[game->x][game->y + 1] == '0')// EMPTY
	{
		game->map[game->x][game->y + 1] = 'P';
		game->map[game->x][game->y] = '0';
		game->nb_move++;
		return (game);
	}
	printf("PARTIE 2 : \n");
	display(game->map);
	// if (game->map[game->x][game->y + 1] == 'E') // EXIT
	// {
	// 	  if (coin_count(game->map) == 0)
	// 	  {
	// 		game->nb_move++;
	// 		exit(0);
	// 	  }
	// 	  else
	// 	  	return (game); // ca retorune toujours sur la game
	// }
	// if (game->map[game->x][game->y + 1] == 'C') // COIN
	// {
	// 	game->map[game->x][game->y + 1] = 'P';
	// 	game->map[game->x][game->y] = '0';
	// 	game->nb_move++;
	// 	// faire baisser le compteur du coin
	// }
	return (game);
}
t_data	*left(t_data *game)
{

	position_player(game->map, &game->x, &game->y);
	printf("PARTIE 1 : \n");
	display(game->map);
	// if (game->map[game->x][game->y - 1] == '1') // WALL
	// 	return (game); // ca retourne toujours sur la game
	if (game->map[game->x][game->y - 1] == '0')// EMPTY
	{
		game->map[game->x][game->y - 1] = 'P';
		game->map[game->x][game->y] = '0';
		game->nb_move++;
		return (game);
	}
	printf("PARTIE 2 : \n");
	display(game->map);
	// if (game->map[game->x][game->y - 1] == 'E') // EXIT
	// {
	// 	  if (coin_count(game->map) == 0)
	// 	  {
	// 		game->nb_move++;
	// 		exit(0);
	// 	  }
	// 	  else
	// 	  	return (game); // ca retorune toujours sur la game
	// }
	// if (game->map[game->x][game->y - 1] == 'C') // COIN
	// {
	// 	game->map[game->x][game->y - 1] = 'P';
	// 	game->map[game->x][game->y] = '0';
	// 	game->nb_move++;
	// 	// faire baisser le compteur du coin
	// }
	return (game);
}
