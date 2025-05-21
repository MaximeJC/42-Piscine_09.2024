#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
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
// 	int	tab[6] = {11, 12, -63, 34, 945, 186};

// 	ft_rev_int_tab(tab, 6);
// }
