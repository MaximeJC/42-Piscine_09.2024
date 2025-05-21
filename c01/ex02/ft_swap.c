#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	n;

	n = *a;
	*a = *b;
	*b = n;
}

// int	main(void)
// {
// 	int		a;
// 	int		b;

// 	a = -18;
// 	b = 42;
// 	printf("%d %d\n", a, b);
// 	ft_swap(&a, &b);
// 	printf("%d %d\n", a, b);
// }
