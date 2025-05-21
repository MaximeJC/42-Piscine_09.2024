#include <stdio.h>
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

// int	main(void)
// {
// 	char	p_str[] = "Qui vit dans un ananas dans la mer ?"; //36

// 	printf("%d", ft_strlen(p_str));
// }
