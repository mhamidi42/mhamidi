#include "../includes/so_long.h"

int		map_rectangular(char **map)
{
	int	i;

	i = 1;
	while(map[i] != NULL)
	{
		if (ft_strlen(map[0]) != ft_strlen(map[i]))
			return (1);
		i++;
	}
	return (0);
}

int		map_parsing(char **map)
{
	if (map_rectangular(map) == 1)
	{
		ft_putendl_fd("map non rectangle", 2);
		return (1);
	}
	if (map_wall_checker(map) == 1)
	{
		ft_putendl_fd("map non entoure de 1", 2);
		return (1);
	}
	if (map_path_check(map) == 1)
	{
		ft_putendl_fd("map path checker error", 2);
		return (1);
	}
	return (0);
}