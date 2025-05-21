#include "../includes/bsq.h"

int	ft_get_map_params(t_map_params *map_prm);
int	ft_read_params(t_map_params *map_prm, char *params_line);
int	ft_check_map(t_map_params *map_prm, int line, int line_len, char *buf);

int	ft_read_map(char *file_path, t_map_params *map_prm)
{
	char	buf[2];

	buf[0] = '\0';
	map_prm->fd = open(file_path, O_RDONLY);
	if (map_prm->fd < 0)
		return (1);
	if (ft_get_map_params(map_prm))
	{
		close(map_prm->fd);
		return (1);
	}
	if (ft_check_map(map_prm, 0, 0, buf))
		return (1);
	map_prm->fd = open(file_path, O_RDONLY);
	if (map_prm->fd < 0)
		return (1);
	return (0);
}

int	ft_get_map_params(t_map_params *map_prm)
{
	int		i;
	char	*params_line;
	char	buf[2];
	int		rt;

	rt = 0;
	params_line = malloc(16);
	if (params_line == NULL)
		return (1);
	i = 0;
	while (read(map_prm->fd, buf, 1) != 0)
	{
		if (buf[0] == '\n' || i == 15)
		{
			params_line[i] = '\0';
			rt = ft_read_params(map_prm, params_line);
			free(params_line);
			return (rt);
		}
		else
			params_line[i] = buf[0];
		i++;
	}
	free(params_line);
	return (1);
}

int	ft_read_params(t_map_params *map_prm, char *params_line)
{
	int	len;
	int	i;

	len = ft_strlen(params_line);
	if (len < 4)
		return (1);
	map_prm->sqr_c = params_line[len - 1];
	map_prm->obst_c = params_line[len - 2];
	map_prm->empty_c = params_line[len - 3];
	if (map_prm->empty_c == map_prm->obst_c
		|| map_prm->empty_c == map_prm->sqr_c
		|| map_prm->obst_c == map_prm->sqr_c
		|| ft_is_printable(map_prm->empty_c)
		|| ft_is_printable(map_prm->obst_c)
		|| ft_is_printable(map_prm->sqr_c))
		return (1);
	i = 0;
	while (i++ < 3)
		params_line[len - i] = '\0';
	map_prm->nb_line = ft_atoi(params_line);
	if (map_prm->nb_line <= 0)
		return (1);
	return (0);
}

int	ft_check_map(t_map_params *map_prm, int line, int line_len, char *buf)
{
	while (read(map_prm->fd, buf, 1) != 0)
	{
		if (buf[0] == '\n')
		{
			if (line == 0)
				map_prm->line_len = line_len;
			if ((line > 0 && line <= map_prm->nb_line)
				&& (line_len == 0 || line_len != map_prm->line_len))
			{
				close(map_prm->fd);
				return (1);
			}
			line_len = -1;
			line++;
		}
		else if (buf[0] != map_prm->empty_c && buf[0] != map_prm->obst_c)
		{
			close(map_prm->fd);
			return (1);
		}
		line_len++;
	}
	close(map_prm->fd);
	return (!(line == map_prm->nb_line));
}
