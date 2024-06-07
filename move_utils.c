#include "so_long.h"

int		coin_count(char **map)
{
	int	i;
	int	j;
	int	c;

	c = 0;
	i = 0;
	while (map[i] != NULL)
	{
		j = 0;
		while (map[i][j] != '\0')
		{
			if (map[i][j] == COIN)
				c++;
			j++;
		}
		i++;
	}
	return (c);
}

void	position_player(char **map, int *i, int *j)
{
    *i = 0;
    while (map[*i] != NULL)
	{
		*j = 0;
		while (map[*i][*j] != '\0')
		{
			if (map[*i][*j] == 'P')
				return ;
			(*j)++;
		}
		(*i)++;
	}
}