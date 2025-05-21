int	ft_one_col_up(int **result_tab, int j)
{
	if (result_tab[0][j] != 4 && result_tab[0][j] != 0)
		return (0);
	result_tab[0][j] = 4;
	return (1);
}

int	ft_one_rev_col_down(int **result_tab, int j)
{
	if (result_tab[3][j] != 4 && result_tab[3][j] != 0)
		return (0);
	result_tab[3][j] = 4;
	return (1);
}

int	ft_one_row_left(int **result_tab, int j)
{
	if (result_tab[j][0] != 4 && result_tab[j][0] != 0)
		return (0);
	result_tab[j][0] = 4;
	return (1);
}

int	ft_one_rev_row_right(int **result_tab, int j)
{
	if (result_tab[j][3] != 4 && result_tab[j][3] != 0)
		return (0);
	result_tab[j][3] = 4;
	return (1);
}
