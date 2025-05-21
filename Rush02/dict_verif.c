#include "header.h"

void	ft_dict_init(t_dict_entry *dict_entries);
char	*ft_inttostr(int nb);
int		ft_dict_full(t_dict_entry *dict_entries);

int	ft_dict_verif(char *dict_name, t_dict_entry	**dict_entries)
{
	int		fd;
	char	*dict_path;
	int		file_len;

	if (dict_name == NULL)
		dict_path = "dictionnaries/numbers.dict";
	else
		dict_path = ft_strcat("dictionnaries/", dict_name);
	fd = open(dict_path, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	file_len = ft_get_file_len(fd);
	*dict_entries = malloc(file_len);
	close(fd);
	if (dict_entries == NULL || file_len < 418)
		return (ft_puterror("Dict Error\n"));
	fd = open(dict_path, O_RDONLY);
	ft_dict_init(*dict_entries);
	ft_dict_convert(fd, *dict_entries, 0);
	close(fd);
	return (ft_dict_full(*dict_entries));
}

void	ft_dict_init(t_dict_entry *dict_entries)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (nb <= 1000)
	{
		dict_entries[i].key = ft_inttostr(nb);
		if (nb < 20)
			nb++;
		else if (nb < 100)
			nb += 10;
		else
			nb += 900;
		i++;
	}
	nb = -1;
	while (nb >= -11)
	{
		dict_entries[i].key = ft_inttostr(nb);
		nb--;
		i++;
	}
}

char	*ft_inttostr(int nb)
{
	char	*nb_str;
	int		i;

	nb_str = malloc(38);
	if (nb_str == NULL)
		return (NULL);
	i = 0;
	if (nb == 0)
	{
		nb_str[i] = '0';
		i++;
	}
	while (nb > 0)
	{
		nb_str[i] = '0' + (nb % 10);
		nb /= 10;
		i++;
	}
	if (nb < 0)
		ft_biginttostr(nb_str, &i, nb);
	nb_str[i] = '\0';
	ft_rev_str(nb_str, i);
	return (nb_str);
}

int	ft_dict_full(t_dict_entry *dict_entries)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		if (!dict_entries[i].value)
			return (0);
		i++;
	}
	return (1);
}
