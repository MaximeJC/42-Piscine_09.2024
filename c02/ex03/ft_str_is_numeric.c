#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_numeric("06645130"));
// 	printf("%d\n", ft_str_is_numeric("350r08"));
// 	printf("%d\n", ft_str_is_numeric(""));
// }
