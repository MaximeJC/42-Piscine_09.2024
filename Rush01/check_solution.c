int	ft_check_view_col(int **param_tab, int **result_tab, int j);
int	ft_check_view_rev_col(int **param_tab, int **result_tab, int j);
int	ft_check_view_row(int **param_tab, int **result_tab, int i);
int	ft_check_view_rev_row(int **param_tab, int **result_tab, int i);

int	ft_valid_number(int **result_tab, int i, int j, int num)
{
	int	k;

	k = 0;
	while (k <= 3)
	{
		if (num == result_tab[i][k] && j != k)
			return (0);
		k++;
	}
	k = 0;
	while (k <= 3)
	{
		if (num == result_tab[k][j] && i != k)
			return (0);
		k++;
	}
	return (1);
}

int	ft_valid_row_view(int **param_tab, int **result_tab, int i)
{
	int	rt;

	rt = 1;
	rt *= ft_check_view_row(param_tab, result_tab, i);
	rt *= ft_check_view_rev_row(param_tab, result_tab, i);
	return (rt);
}

int	ft_valid_col_views(int **param_tab, int **result_tab)
{
	int	rt;

	rt = 1;
	rt *= ft_check_view_col(param_tab, result_tab, 0);
	rt *= ft_check_view_col(param_tab, result_tab, 1);
	rt *= ft_check_view_col(param_tab, result_tab, 2);
	rt *= ft_check_view_col(param_tab, result_tab, 3);
	rt *= ft_check_view_rev_col(param_tab, result_tab, 0);
	rt *= ft_check_view_rev_col(param_tab, result_tab, 1);
	rt *= ft_check_view_rev_col(param_tab, result_tab, 2);
	rt *= ft_check_view_rev_col(param_tab, result_tab, 3);
	return (rt);
}
