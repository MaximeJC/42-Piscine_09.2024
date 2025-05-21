#include "../includes/bsq.h"

void	ft_write_map(char **map, t_map_params *map_prm)
{
	int	dec_i;
	int	dec_j;

	dec_i = 0;
	while (dec_i < map_prm->sqr_size)
	{
		dec_j = 0;
		while (dec_j < map_prm->sqr_size)
		{
			map[map_prm->sqr_max_x + dec_i][map_prm->sqr_max_y + dec_j]
				= map_prm->sqr_c;
			dec_j++;
		}
		dec_i++;
	}
}

void	ft_print_map(char **map, t_map_params *map_prm)
{
	int	i;

	i = 0;
	while (i < map_prm->nb_line)
	{
		write(1, map[i], map_prm->line_len);
		write(1, "\n", 1);
		i++;
	}
}
