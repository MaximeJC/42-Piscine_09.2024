#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char str[] = "ahVWtYAsb";
// 	printf("%s\n", ft_strupcase(str));
// }
