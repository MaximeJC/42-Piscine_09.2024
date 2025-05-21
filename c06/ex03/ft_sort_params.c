#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_sort_arg_ascii(char **argv, int i)
{
	int		j;
	char	*arg;

	j = 0;
	while (argv[i][j] == argv[i + 1][j])
		j++;
	if (argv[i][j] > argv[i + 1][j])
	{
		arg = argv[i];
		argv[i] = argv[i + 1];
		argv[i + 1] = arg;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 2)
		ft_putstr(argv[1]);
	if (argc <= 2)
		return (0);
	i = 1;
	j = argc - 1;
	while (j > 0)
	{
		while (i < j)
		{
			ft_sort_arg_ascii(argv, i);
			i++;
		}
		i = 1;
		j--;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
}
