#include "header.h"

void	ft_printrange(int range, t_dict_entry *dict_entries)
{
	int	i;

	i = 0;
	while (ft_strlen(dict_entries[i].key) != range - 2 && dict_entries[i].key)
		i++;
	ft_putstr(dict_entries[i].value);
	ft_putstr(" ");
}

void	ft_printhundchar(char ch[0], t_dict_entry *dict_entries)
{
	int	i;

	i = 0;
	while (ch[0] != dict_entries[i].key[0]
		&& ft_strlen(dict_entries[i].key) == 1)
		i++;
	ft_putstr(dict_entries[i].value);
	i = 0;
	while (ft_strcmp(dict_entries[i].key, "100") != 0)
		i++;
	ft_putstr(" ");
	ft_putstr(dict_entries[i].value);
	ft_putstr(" ");
}

void	ft_printdecchar(char *ch, t_dict_entry *dict_entries)
{
	int	i;

	i = 0;
	while (1)
	{
		if (ch[0] == dict_entries[i].key[0]
			&& ft_strlen(dict_entries[i].key) == 2)
			break ;
		i++;
	}
	ft_putstr(dict_entries[i].value);
	ft_putstr(" ");
}

void	ft_printdecteen(char *chain, t_dict_entry *dict_entries)
{
	int	i;

	i = 0;
	while (ft_strlen(dict_entries[i].key) != 2)
		i++;
	while (dict_entries[i].key[1] != chain[0])
		i++;
	ft_putstr(dict_entries[i].value);
	ft_putstr(" ");
}

void	ft_printdigitchar(char chain[0], t_dict_entry *dict_entries)
{
	int	i;

	i = 0;
	while (dict_entries[i].key[0] != chain[0])
		i++;
	ft_putstr(dict_entries[i].value);
	ft_putstr(" ");
}
