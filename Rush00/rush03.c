void	ft_putchar(char c);

void	ft_choose_char(int x, int y, int x_index, int y_index)
{
	if (x_index == 1 && (y_index == 1 || y_index == y))
	{
		ft_putchar('A');
	}
	else if (x_index == x && (y_index == 1 || y_index == y))
	{
		ft_putchar('C');
	}
	else if (x_index == 1 || x_index == x || y_index == 1 || y_index == y)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	x_index;
	int	y_index;

	x_index = 1;
	y_index = 1;
	while (y_index <= y)
	{
		while (x_index <= x)
		{
			ft_choose_char(x, y, x_index, y_index);
			x_index++;
		}
		y_index++;
		ft_putchar('\n');
		x_index = 1;
	}
}
