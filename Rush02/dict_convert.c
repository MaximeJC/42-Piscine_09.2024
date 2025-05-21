#include "header.h"

void	ft_treat_line(t_dict_entry *dict_entries, char *line);
void	ft_linetodictvalue(t_dict_entry *dict_entries, char *line);

void	ft_dict_convert(int fd, t_dict_entry *dict_entries, int i)
{
	char	buf[2];
	char	*line;

	line = malloc(255);
	while (read(fd, buf, 1) != 0)
	{
		if (buf[0] == '\n')
		{
			line[i] = '\n';
			ft_treat_line(dict_entries, line);
			while (i >= 0)
			{
				line[i] = '\0';
				i--;
			}
		}
		else
			line[i] = buf[0];
		i++;
	}
	line[i] = '\n';
	ft_treat_line(dict_entries, line);
	free(line);
	return ;
}

void	ft_treat_line(t_dict_entry *dict_entries, char *line)
{
	int	state;
	int	i;

	state = 0;
	i = 0;
	while (state != 3 && line[i] != '\n')
	{
		if (line[i] >= 33 && line[i] <= 126 && state == 2)
			state++;
		if (line[i] == ':' && state == 1)
			state++;
		if (line[i] >= 48 && line[i] <= 57 && state == 0)
			state++;
		if ((state == 0 || state == 1) && line[i] != ' ' && line[i] != ':'
			&& !(line[i] >= 48 && line[i] <= 57))
			state = -1;
		i++;
	}
	if (state == 3)
		ft_linetodictvalue(dict_entries, line);
	return ;
}

void	ft_linetodictvalue(t_dict_entry *dict_entries, char *line)
{
	char	*key;
	char	*value;
	int		i;

	key = malloc(127);
	value = malloc(127);
	ft_no_more_space(line, key, value);
	i = 0;
	while (i < 41)
	{
		if (ft_strcmp(dict_entries[i].key, key) == 0)
		{
			dict_entries[i].value = value;
			return ;
		}
		i++;
	}
	return ;
}

void	ft_norme_value(char *str, char *value, int i)
{
	int	j;

	j = 0;
	while (str[i] != ':')
		i++;
	if (str[i] == ':')
		i++;
	while (str[i] && str[i] != '\n')
	{
		while (str[i] == ' ')
			i++;
		if (j != 0 && str[i] != '\n' && str[i])
		{
			value[j] = ' ';
			j++;
		}
		while (str[i] != ' ' && (str[i] >= 32 && str[i] <= 126)
			&& str[i] != '\n' && str[i])
		{
			value[j] = str[i];
			i++;
			j++;
		}
	}
}

void	ft_no_more_space(char *str, char *key, char *value)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		key[j] = str[i];
		i++;
		j++;
	}
	ft_norme_value(str, value, 0);
}
