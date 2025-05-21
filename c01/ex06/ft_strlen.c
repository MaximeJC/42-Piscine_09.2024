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
// 	char	*p_str;
// 	int		i;

// 	p_str = "Never gonna give you up!"; //24
// 	i = ft_strlen(p_str);
// 	printf("%d", i);
// }
