#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("gCHjv  516!?%#*^"));
// 	printf("%d\n", ft_str_is_printable("wgwg64€"));
// 	printf("%d\n", ft_str_is_printable(""));
// }
