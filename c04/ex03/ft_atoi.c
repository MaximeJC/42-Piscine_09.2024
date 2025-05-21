#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_isnum(char c)
{
	if (c < '0' || c > '9')
		return (0);
	else
		return (1);
}

int	ft_atoi(char	*str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isnum(str[i]) == 1)
	{
		if (result == 214748364 && str[i] == '8' && sign == -1)
			return (-2147483648);
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= sign;
	return (result);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi(" \f \n-+++-+--27483648816561a9"));
// }
