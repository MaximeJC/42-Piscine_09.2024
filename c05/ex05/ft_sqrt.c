#include <stdlib.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/* int main(int argc, char **argv)
{
	argc = 0;
	printf("%d", ft_sqrt(atoi(argv[1])));
} */
