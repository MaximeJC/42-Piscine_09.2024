#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/* void	ft_print_tab(int *tab, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	*tab;

	argc = 0;
	tab = (ft_range(atoi(argv[1]), atoi(argv[2])));
	ft_print_tab(tab, atoi(argv[2]) - atoi(argv[1]));
} */
