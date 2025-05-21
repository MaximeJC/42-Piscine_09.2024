#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	char	p_str[] = "Bob l'Eponge Carre !";

// 	ft_putstr(p_str);
// }
