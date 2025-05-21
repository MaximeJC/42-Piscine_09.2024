#include "header.h"

int	ft_get_file_len(int fd)
{
	int		i;
	char	buf[2];

	i = 0;
	while (read(fd, buf, 1) != 0)
	{
		i++;
	}
	return (i);
}

void	ft_rev_str(char *str, int size)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

void	ft_biginttostr(char *nb_str, int *i, int nb)
{
	int	j;

	j = 0;
	while (nb <= 0)
	{
		while (j < 3)
		{
			nb_str[*i] = '0';
			j++;
			*i += 1;
		}
		j = 0;
		nb++;
	}
	nb_str[*i] = '1';
	*i += 1;
}
