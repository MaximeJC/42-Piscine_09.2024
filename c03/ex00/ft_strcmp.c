#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\n')
		{
			break ;
		}
		i++;
	}
	if (s1[i] > s2[i])
	{
		return (1);
	}
	else if (s1[i] < s2[i])
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}

/* int	main(void)
{
	printf("%d\n", strcmp("123456", "123456"));
	printf("%d", ft_strcmp("123456", "123456"));
} */
