#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	rt;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	rt = max - min;
	*range = malloc(sizeof(int) * rt);
	if (range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (rt);
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
	int *range = NULL;

	argc = 0;
	(void)argv;
	printf("%d\n", ft_ultimate_range(&range, 10, 50));
	if (range != NULL)
		ft_print_tab(range, 40);
} */
