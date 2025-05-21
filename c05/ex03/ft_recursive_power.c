#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_power(-15, 6));
// }
