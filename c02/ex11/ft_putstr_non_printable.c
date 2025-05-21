#include <unistd.h>

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	ft_print_to_hex(int n)
{
	unsigned char	c1;
	unsigned char	c2;

	c2 = (n % 16);
	if (c2 < 10)
	{
		c2 += 48;
	}
	else
	{
		c2 += 87;
	}
	n /= 16;
	c1 = (n % 16);
	if (c1 < 10)
	{
		c1 += 48;
	}
	else
	{
		c1 += 87;
	}
	ft_putchar('\\');
	ft_putchar(c1);
	ft_putchar(c2);
}

int	ft_str_is_printable(unsigned char c)
{
	if (c < 32 || c > 126)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]) == 0)
		{
			ft_print_to_hex((unsigned char)str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/* int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	ft_putchar('\n');
	ft_putstr_non_printable("\x13 \x0c \xff \xca");
} */
