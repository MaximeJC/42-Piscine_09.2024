int		ft_param_str(char *str);
void	ft_convert_param_tab(char *str, int **param_tab);
int		ft_check_comb(int **param_tab);

int	ft_check_param(char *str, int **param_tab)
{
	int	rt;

	rt = 1;
	rt = ft_param_str(str);
	if (rt == 0)
		return (0);
	ft_convert_param_tab(str, param_tab);
	rt = ft_check_comb(param_tab);
	return (rt);
}

int	ft_param_str(char *str)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (!(str[i] >= '1' && str[i] <= '4'))
			return (0);
		i = i + 2;
	}
	i = 1;
	while (i < 31)
	{
		if (str[i] != ' ')
			return (0);
		i = i + 2;
	}
	if (str[i] != '\0')
		return (0);
	return (1);
}

void	ft_convert_param_tab(char *str, int **param_tab)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			param_tab[i][j] = (str[k] - '0');
			k += 2;
			j++;
		}
		i++;
		j = 0;
	}
}

int	ft_check_comb(int **param_tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (param_tab[i][j] + param_tab[i + 1][j] < 3
				|| param_tab[i][j] + param_tab[i + 1][j] > 5)
				return (0);
			j++;
		}
		i += 2;
		j = 0;
	}
	return (1);
}
