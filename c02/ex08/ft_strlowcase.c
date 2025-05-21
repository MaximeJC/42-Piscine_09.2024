#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char str[] = "ahVWtYAsb";
// 	printf("%s\n", ft_strlowcase(str));
// }
