#include <unistd.h>

int		ft_valid_number(int **result_tab, int i, int j, int num);
void	ft_print_tab(int **tab);
int		ft_easy_resolv(int **param_tab, int **result_tab);
int		ft_solve_recur(int **param_tab, int **result_tab, int i, int j);
int		ft_valid_number(int **result_tab, int i, int j, int num);
int		ft_valid_row_view(int **param_tab, int **result_tab, int i);
int		ft_valid_col_views(int **param_tab, int **result_tab);

void	ft_solve(int **param_tab, int **result_tab)
{
	int	rt;

	rt = ft_easy_resolv(param_tab, result_tab);
	if (rt == 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	rt = ft_solve_recur(param_tab, result_tab, 0, 0);
	if (rt == 0)
	{
		write(1, "Error\n", 6);
		return ;
	}
	ft_print_tab(result_tab);
}

int	ft_solve_recur(int **param_tab, int **result_tab, int i, int j)
{
	int	k;

	if (i == 4)
		return (ft_valid_col_views(param_tab, result_tab));
	if (j == 4)
	{
		if (ft_valid_row_view(param_tab, result_tab, i) == 1)
			return (ft_solve_recur(param_tab, result_tab, i + 1, 0));
		else
			return (0);
	}
	if (result_tab[i][j] != 0)
		return (ft_solve_recur(param_tab, result_tab, i, j + 1));
	k = 0;
	while (k++ <= 3)
	{
		if (ft_valid_number(result_tab, i, j, k) == 1)
		{
			result_tab[i][j] = k;
			if (ft_solve_recur(param_tab, result_tab, i, j + 1) == 1)
				return (1);
		}
		result_tab[i][j] = 0;
	}
	return (0);
}
