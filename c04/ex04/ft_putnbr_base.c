#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
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
		if (base[i] == '+' || base[i] == '-')
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

void	ft_putnbr_base_longint(long nbr, char *base, int i, int j)
{
	char	output[32];
	int		base_len;

	if (ft_check_base(base) == 0)
		return ;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	while (nbr != 0)
	{
		output[i] = base[(nbr % base_len)];
		nbr = nbr / base_len;
		i++;
	}
	j = i;
	while (j-- >= 0)
		write(1, &output[j], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	ft_putnbr_base_longint(nbr, base, 0, 0);
}

// int	main(void)
// {
// 	ft_putnbr_base(6, "012345");
// }
