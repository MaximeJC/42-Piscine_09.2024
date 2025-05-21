#include "../includes/bsq.h"

void	ft_find_square(char **map, t_map_params *map_prm);

int	ft_square_finder(char *path, t_map_params *map_prm)
{
	char	**map;

	if (ft_map_malloc(&map, map_prm, -1))
		return (1);
	map_prm->fd = open(path, O_RDONLY);
	if (map_prm->fd < 0)
		return (ft_map_free(&map, map_prm));
	if (ft_fill_tab(map, map_prm, 0, 0))
	{
		close(map_prm->fd);
		return (ft_map_free(&map, map_prm));
	}
	close(map_prm->fd);
	ft_find_square(map, map_prm);
	if (map_prm->sqr_size > 0)
		ft_write_map(map, map_prm);
	ft_print_map(map, map_prm);
	return (ft_map_free(&map, map_prm));
	return (0);
}

int	ft_find_square_bis(char **map, t_map_params *map_prm, int i, int j)
{
	int	dec_i;
	int	dec_j;
	int	size;
	int	empty;

	empty = 0;
	size = 0;
	while (empty == 0)
	{
		dec_i = -1;
		while (dec_i++ < size && empty == 0)
		{
			dec_j = -1;
			while (dec_j++ < size && empty == 0)
			{
				if ((i + dec_i >= map_prm->nb_line)
					|| (j + dec_j >= map_prm->line_len)
					|| (map[i + dec_i][j + dec_j] != map_prm->empty_c))
					empty = 1;
			}
		}
		if (empty == 0)
			size++;
	}
	return (size);
}

void	ft_find_square(char **map, t_map_params *map_prm)
{
	int	size;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (map_prm->nb_line - map_prm->sqr_size))
	{
		while (j < (map_prm->line_len - map_prm->sqr_size))
		{
			size = ft_find_square_bis(map, map_prm, i, j);
			if (size > map_prm->sqr_size)
			{
				map_prm->sqr_size = size;
				map_prm->sqr_max_x = i;
				map_prm->sqr_max_y = j;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
