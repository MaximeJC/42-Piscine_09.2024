#ifndef BSQ_H
# define BSQ_H

# include "ft.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct t_map_params
{
	int		fd;
	int		nb_line;
	int		line_len;
	char	empty_c;
	char	obst_c;
	char	sqr_c;
	int		sqr_max_x;
	int		sqr_max_y;
	int		sqr_size;
}	t_map_params;

int		ft_read_map(char *file_path, t_map_params *map_prm);
int		ft_square_finder(char *temp_path, t_map_params *map_prm);
void	ft_print_map(char **map, t_map_params *map_prm);
int		ft_map_malloc(char ***map, t_map_params *map_prm, int i);
int		ft_map_free(char ***map, t_map_params *map_prm);
int		ft_fill_tab(char **map, t_map_params *map_prm, int i, int nb_line);
void	ft_write_map(char **map, t_map_params *map_prm);

#endif
