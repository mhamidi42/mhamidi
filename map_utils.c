#include "../includes/so_long.h"

char **copy_map(char **map)
{
	char **copy;
	int	i;

	i = 0;
	while(map[i] != NULL)
		i++;
	copy = (char **)malloc(sizeof(char *) * (i + 1));
	i = 0;
	while(map[i] != NULL)
	{
		copy[i] = ft_strdup(map[i]);
		i++;
	}
	copy[i] = NULL;
	return(copy);
}

int	find_pos(char **map, char c, int *res_y, int *res_x)
{
	int		y;
	int		x;

	y = 0;
	while (map[y] != NULL)
	{
		x = 0;
		while (map[y][x] != '\0')
		{
			if (map[y][x] == c)
			{
				*res_y = y;
				*res_x = x;
				return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

void display(char **map)
{
	int	i;

	i = 0;
	while (map[i] != NULL)
	{
		printf("%s\n", map[i]);
		i++;
	}
}
