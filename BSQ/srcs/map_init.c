#include "../includes/bsq.h"

int	ft_fill_tab(char **map, t_map_params *map_prm, int i, int nb_line)
{
	char	*tab_line;
	char	buf[2];
	int		rt;

	rt = 0;
	tab_line = malloc(map_prm->line_len + 1);
	if (tab_line == NULL)
		return (1);
	while (read(map_prm->fd, buf, 1) != 0 && buf[0] != '\n')
		;
	while (read(map_prm->fd, buf, 1) != 0)
	{
		if (buf[0] == '\n')
		{
			tab_line[i] = '\0';
			map[nb_line] = ft_strcpy(map[nb_line], tab_line);
			i = -1;
			nb_line++;
		}
		else
			tab_line[i] = buf[0];
		i++;
	}
	free(tab_line);
	return (0);
}

int	ft_map_malloc(char ***map, t_map_params *map_prm, int i)
{
	char	*line;

	line = malloc(map_prm->line_len + 1);
	if (line == NULL)
		return (1);
	*map = malloc(sizeof(line) * map_prm->nb_line);
	if (*map == NULL)
	{
		free(line);
		return (1);
	}
	while (i++ < (map_prm->nb_line - 1))
	{
		map[0][i] = malloc((map_prm->line_len + 1));
		if (map[0][i] == NULL)
		{
			while (i-- >= 0)
				free(map[0][i]);
			free(*map);
			free(line);
			return (1);
		}
	}
	free(line);
	return (0);
}

int	ft_map_free(char ***map, t_map_params *map_prm)
{
	int	i;

	i = 0;
	while (i < map_prm->nb_line)
	{
		free(map[0][i]);
		i++;
	}
	free(*map);
	return (0);
}
