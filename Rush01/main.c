#include <unistd.h>
#include <stdlib.h>

int		ft_check_param(char *str, int **param_tab);
void	ft_solve(int **param_tab, int **result_tab);

int	ft_error(void)
{
	write(1, "Error\n", 5);
	return (0);
}

void	ft_set_tab(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			tab[i][j] = 8;
			j++;
		}
		j = 0;
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	**param_tab;
	int	**result_tab;
	int	rt;
	int	i;

	rt = 1;
	if (argc != 2)
		rt *= ft_error();
	if (rt == 0)
		return (0);
	i = -1;
	param_tab = (int **)malloc(sizeof(int *) * 4);
	result_tab = (int **)malloc(sizeof(int *) * 4);
	while (i++ < 3)
	{
		param_tab[i] = (int *)malloc(sizeof(int) * 4);
		result_tab[i] = (int *)malloc(sizeof(int) * 4);
	}
	rt = ft_check_param(argv[1], param_tab);
	if (rt == 0)
		rt *= ft_error();
	if (rt == 0)
		return (0);
	ft_solve(param_tab, result_tab);
}
