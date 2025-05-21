#include <stdio.h>
#include <unistd.h>

char	ft_format_first_digit(int n)
{
	char	c;

	if (n < 10)
	{
		c = '0';
	}
	else
	{
		c = (n / 10) + '0';
	}
	return (c);
}

void	ft_print_result(int first, int second)
{
	char	pair[4];
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	pair[0] = ft_format_first_digit(first);
	pair[1] = (first % 10) + '0';
	pair[2] = ft_format_first_digit(second);
	pair[3] = (second % 10) + '0';
	write(1, &pair[0], 1);
	write(1, &pair[1], 1);
	write(1, &space, 1);
	write(1, &pair[2], 1);
	write(1, &pair[3], 1);
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_final_print(int first, int second)
{
	char	pair[4];
	char	space;

	space = ' ';
	pair[0] = ft_format_first_digit(first);
	pair[1] = (first % 10) + '0';
	pair[2] = ft_format_first_digit(second);
	pair[3] = (second % 10) + '0';
	write(1, &pair[0], 1);
	write(1, &pair[1], 1);
	write(1, &space, 1);
	write(1, &pair[2], 1);
	write(1, &pair[3], 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = 1;
	while (first < 98)
	{
		while (second <= 99)
		{
			ft_print_result(first, second);
			second++;
		}
		first++;
		second = first + 1;
	}
	ft_final_print(first, second);
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
