#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}

// int	main(void)
// {
// 	int		a;
// 	int		b;

// 	a = 85;
// 	b = 10;
// 	printf("a = %d and b = %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Division result: %d\n", a);
// 	printf("Modulo result: %d\n", b);
// }
