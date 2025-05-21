#include "../includes/bsq.h"

void	ft_reset_map_params(t_map_params *map_prm);
void	ft_read_terminal(char *temp_path);

int	main(int argc, char **argv)
{
	t_map_params	map_prm;
	int				i;
	char			*temp_path;

	temp_path = "term_buf/term_buf.txt";
	i = 0;
	if (argc == 1)
	{
		ft_read_terminal(temp_path);
		ft_reset_map_params(&map_prm);
		if (ft_read_map(temp_path, &map_prm) == 0)
			ft_square_finder(temp_path, &map_prm);
		else
			write(1, "map error\n", 10);
	}
	while (i++ < argc - 1)
	{
		ft_reset_map_params(&map_prm);
		if (ft_read_map(argv[i], &map_prm) == 0)
			ft_square_finder(argv[i], &map_prm);
		else
			write(1, "map error\n", 10);
		if (argc >= 3)
			write(1, "\n", 1);
	}
}

void	ft_reset_map_params(t_map_params *map_prm)
{
	map_prm->fd = -1;
	map_prm->nb_line = -1;
	map_prm->line_len = -1;
	map_prm->empty_c = '\0';
	map_prm->obst_c = '\0';
	map_prm->sqr_c = '\0';
	map_prm->sqr_max_x = -1;
	map_prm->sqr_max_y = -1;
	map_prm->sqr_size = 0;
}

void	ft_read_terminal(char *temp_path)
{
	char	buf[2];
	int		fd;

	fd = open(temp_path, O_RDWR | O_CREAT | O_TRUNC | O_APPEND);
	while (read(0, buf, 1) != 0)
		write(fd, &buf[0], 1);
	close(fd);
}
