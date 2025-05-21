#include <stdio.h>
#include <unistd.h>

void	ft_print_result(int i_int, int j_int, int k_int)
{
	char	i_char;
	char	j_char;
	char	k_char;
	char	comma;
	char	space;

	i_char = i_int + '0';
	j_char = j_int + '0';
	k_char = k_int + '0';
	comma = ',';
	space = ' ';
	write(1, &i_char, 1);
	write(1, &j_char, 1);
	write(1, &k_char, 1);
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_final_print(int i_int, int j_int, int k_int)
{
	char	i_char;
	char	j_char;
	char	k_char;

	i_char = i_int + '0';
	j_char = j_int + '0';
	k_char = k_int + '0';
	write(1, &i_char, 1);
	write(1, &j_char, 1);
	write(1, &k_char, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 2;
	while (i < 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				ft_print_result(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
	}
	k = j + 1;
	ft_final_print(i, j, k);
}

// int	main(void)
// {
// 	ft_print_comb();
// }
