#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a' - 1;
	while (c != 'z')
	{
		c++;
		write(1, &c, 1);
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }
