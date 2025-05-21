#include <stdio.h>

int	ft_is_alphanum(char c)
{
	if ((c < '0')
		|| (c > '9' && c < 'A')
		|| (c > 'Z' && c < 'a')
		|| (c > 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

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

char	ft_strupcase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_is_alphanum(str[i - 1]) == 0 && ft_is_alphanum(str[i]) == 1)
		{
			str[i] = ft_strupcase(str[i]);
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "a sALut, coMMent vas-tu a ? 42mots n0;et";
// 	printf("%s\n", ft_strcapitalize(str));
// }
