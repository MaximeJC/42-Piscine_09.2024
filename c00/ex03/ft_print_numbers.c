#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0' - 1;
	while (number < '9')
	{
		number++;
		write(1, &number, 1);
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// }
