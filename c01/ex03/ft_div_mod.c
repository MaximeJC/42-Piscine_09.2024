#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int		a;
// 	int		b;
// 	int		div;
// 	int		mod;

// 	a = 85;
// 	b = 10;
// 	div = 0;
// 	mod = 0;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d / %d = %d\n", a, b, div);
// 	printf("%d mod %d = %d", a, b, mod);
// }
