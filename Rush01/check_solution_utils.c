int	ft_check_view_row(int **param_tab, int **result_tab, int i)
{
	int	j;
	int	nb_view;
	int	nb_max_height;

	j = 1;
	nb_view = 1;
	nb_max_height = result_tab[i][0];
	while (j <= 3)
	{
		if (result_tab[i][j] > nb_max_height)
		{
			nb_max_height = result_tab[i][j];
			nb_view++;
		}
		j++;
	}
	if (nb_view == param_tab[2][i])
		return (1);
	else
		return (0);
}

int	ft_check_view_rev_row(int **param_tab, int **result_tab, int i)
{
	int	j;
	int	nb_view;
	int	nb_max_height;

	j = 2;
	nb_view = 1;
	nb_max_height = result_tab[i][3];
	while (j >= 0)
	{
		if (result_tab[i][j] > nb_max_height)
		{
			nb_max_height = result_tab[i][j];
			nb_view++;
		}
		j--;
	}
	if (nb_view == param_tab[3][i])
		return (1);
	else
		return (0);
}

int	ft_check_view_col(int **param_tab, int **result_tab, int j)
{
	int	i;
	int	nb_view;
	int	nb_max_height;

	i = 1;
	nb_view = 1;
	nb_max_height = result_tab[0][j];
	while (i <= 3)
	{
		if (result_tab[i][j] > nb_max_height)
		{
			nb_max_height = result_tab[i][j];
			nb_view++;
		}
		i++;
	}
	if (nb_view == param_tab[0][j])
		return (1);
	else
		return (0);
}

int	ft_check_view_rev_col(int **param_tab, int **result_tab, int j)
{
	int	i;
	int	nb_view;
	int	nb_max_height;

	i = 2;
	nb_view = 1;
	nb_max_height = result_tab[3][j];
	while (i >= 0)
	{
		if (result_tab[i][j] > nb_max_height)
		{
			nb_max_height = result_tab[i][j];
			nb_view++;
		}
		i--;
	}
	if (nb_view == param_tab[1][j])
		return (1);
	else
		return (0);
}
