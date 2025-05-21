#include <stdio.h>
#include <unistd.h>

int	ft_is_negative(int nb)
{
	char	c;

	c = '-';
	if (nb < 0)
	{
		write(1, &c, 1);
		nb = -nb;
	}
	return (nb);
}

int	ft_get_nb_lenght(int nb)
{
	int	l;

	l = 1;
	while (nb > 9)
	{
		l++;
		nb /= 10;
	}
	return (l);
}

void	ft_calc_nbr(int nb, int l)
{
	char	c[10];
	int		i;

	i = 0;
	while (i != l)
	{
		i++;
		c[l - i] = (nb % 10) + '0';
		nb /= 10;
	}
	i = 0;
	while (i < l)
	{
		write(1, &c[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int		l;

	nb = ft_is_negative(nb);
	l = ft_get_nb_lenght(nb);
	ft_calc_nbr(nb, l);
}

// int	main(void)
// {
// 	char	space;

// 	space = ' ';
// 	ft_putnbr(12345);
// 	write(1, &space, 1);
// 	ft_putnbr(-54321);
// }
