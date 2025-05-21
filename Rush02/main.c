#include "header.h"

void	ft_free_dict(t_dict_entry *dict_entries)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		free(dict_entries[i].key);
		free(dict_entries[i].value);
		i++;
	}
	free(dict_entries);
}

void	ft_resolv(char *nbr, t_dict_entry *dict_entries)
{
	if (dectzero(nbr) == 1)
		nbr = copy_zero(nbr);
	if (detectnum(nbr) == 1)
		cut(ft_zero(nbr), dict_entries);
	else
		write(2, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	t_dict_entry	*dict_entries;
	char			*nbr;

	dict_entries = 0;
	nbr = argv[argc - 1];
	if (argc == 1)
		return (ft_puterror("Error\n"));
	else if (argc == 2 && ft_strlen(argv[1]) <= 39 && ft_strlen(argv[1]) != 0)
	{
		if (ft_dict_verif(NULL, &dict_entries) == 1)
			ft_resolv(nbr, dict_entries);
		else
			ft_puterror("Dict Error\n");
	}
	else if (argc == 3 && ft_strlen(argv[2]) <= 39 && ft_strlen(argv[2]) != 0)
	{
		if (ft_dict_verif(argv[1], &dict_entries) == 1)
			ft_resolv(nbr, dict_entries);
		else
			return (ft_puterror("Dict Error\n"));
	}
	else
		return (ft_puterror("Error\n"));
	ft_free_dict(dict_entries);
	return (0);
}
