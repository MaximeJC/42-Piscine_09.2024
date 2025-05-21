#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	c;

	c = 'z' + 1;
	while (c != 'a')
	{
		c--;
		write(1, &c, 1);
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }
