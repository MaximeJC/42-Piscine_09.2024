#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]) == 1)
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	ft_is_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_get_result(int *output, char *base, int i, int j)
{
	int	result;
	int	base_len;
	int	n;
	int	temp;

	base_len = 0;
	while (*base != '\0')
	{
		base_len++;
		base++;
	}
	result = 0;
	while (j >= 0)
	{
		temp = 1;
		n = i - j;
		while (n > 0)
		{
			temp *= base_len;
			n--;
		}
		result += (output[j] * temp);
		j--;
	}
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	j;
	int	sign;
	int	output[32];

	i = 0;
	j = 0;
	sign = 1;
	if (ft_check_base(base) == 0)
		return (0);
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_is_base(str[i], base) >= 0)
	{
		output[j] = ft_is_base(str[i], base);
		i++;
		j++;
	}
	return (ft_get_result(output, base, (j - 1), (j - 1)) * sign);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi_base(" \f \n-+-++-+--000a000", "0123456789abcdef"));
// }
