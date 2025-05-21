int	ft_four_col_up(int **result_tab, int j)
{
	int	k;

	k = 1;
	while (k <= 4)
	{
		if (result_tab[k - 1][j] != k && result_tab[k - 1][j] != 0)
			return (0);
		result_tab[k - 1][j] = k;
		k++;
	}
	return (1);
}

int	ft_four_rev_col_down(int **result_tab, int j)
{
	int	k;

	k = 1;
	while (k <= 4)
	{
		if (result_tab[4 - k][j] != k && result_tab[4 - k][j] != 0)
			return (0);
		result_tab[4 - k][j] = k;
		k++;
	}
	return (1);
}

int	ft_four_row_left(int **result_tab, int j)
{
	int	k;

	k = 1;
	while (k <= 4)
	{
		if (result_tab[j][k - 1] != k && result_tab[j][k - 1] != 0)
			return (0);
		result_tab[j][k - 1] = k;
		k++;
	}
	return (1);
}

int	ft_four_rev_row_right(int **result_tab, int j)
{
	int	k;

	k = 1;
	while (k <= 4)
	{
		if (result_tab[j][4 - k] != k && result_tab[j][4 - k] != 0)
			return (0);
		result_tab[j][4 - k] = k;
		k++;
	}
	return (1);
}
