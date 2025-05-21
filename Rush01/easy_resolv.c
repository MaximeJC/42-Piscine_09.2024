int	ft_four_col_up(int **result_tab, int j);
int	ft_four_rev_col_down(int **result_tab, int j);
int	ft_four_row_left(int **result_tab, int j);
int	ft_four_rev_row_right(int **result_tab, int j);
int	ft_one_col_up(int **result_tab, int j);
int	ft_one_rev_col_down(int **result_tab, int j);
int	ft_one_row_left(int **result_tab, int j);
int	ft_one_rev_row_right(int **result_tab, int j);
int	ft_four_result(int **param_tab, int **result_tab);
int	ft_one_result(int **param_tab, int **result_tab);

int	ft_easy_resolv(int **param_tab, int **result_tab)
{
	int	rt;

	rt = 1;
	rt *= ft_four_result(param_tab, result_tab);
	if (rt == 0)
		return (0);
	rt *= ft_one_result(param_tab, result_tab);
	if (rt == 0)
		return (0);
	return (1);
}

int	ft_four_result(int **param_tab, int **result_tab)
{
	int	i;
	int	j;
	int	rt;

	i = 0;
	j = 0;
	rt = 1;
	while (i < 4)
	{
		while (j < 4)
		{
			if (param_tab[i][j] == 4 && i == 0)
				rt *= ft_four_col_up(result_tab, j);
			else if (param_tab[i][j] == 4 && i == 1)
				rt *= ft_four_rev_col_down(result_tab, j);
			else if (param_tab[i][j] == 4 && i == 2)
				rt *= ft_four_row_left(result_tab, j);
			else if (param_tab[i][j] == 4 && i == 3)
				rt *= ft_four_rev_row_right(result_tab, j);
			j++;
		}
		j = 0;
		i++;
	}
	return (rt);
}

int	ft_one_result(int **param_tab, int **result_tab)
{
	int	i;
	int	j;
	int	rt;

	i = 0;
	j = 0;
	rt = 1;
	while (i < 4)
	{
		while (j < 4)
		{
			if (param_tab[i][j] == 1 && i == 0)
				rt *= ft_one_col_up(result_tab, j);
			else if (param_tab[i][j] == 1 && i == 1)
				rt *= ft_one_rev_col_down(result_tab, j);
			else if (param_tab[i][j] == 1 && i == 2)
				rt *= ft_one_row_left(result_tab, j);
			else if (param_tab[i][j] == 1 && i == 3)
				rt *= ft_one_rev_row_right(result_tab, j);
			j++;
		}
		j = 0;
		i++;
	}
	return (rt);
}
