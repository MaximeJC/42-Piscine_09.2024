#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (j > 0)
	{
		while (i <= j)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		i = 0;
		j--;
	}
}
//	A paste dans ft_rev_int_tab pour la verif
		// i = 0;
		// while (i < size)
		// {
		// 	printf("%d ", tab[i]);
		// 	i++;
		// }

// int	main(void)
// {
// 	int	tab[6] = {945, 128, 63, 34, 11, -186};

// 	ft_sort_int_tab(tab, 6);
// }
