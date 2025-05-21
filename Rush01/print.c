#include <unistd.h>

void	ft_print_tab(int **tab)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			c = tab[i][j] + '0';
			write(1, &c, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		i++;
		j = 0;
		write(1, "\n", 1);
	}
}
