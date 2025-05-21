#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i < (n - 1))
	{
		if (s1[i] == '\0')
			break ;
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", strncmp("523456", "123456", 0));
// 	printf("%d", ft_strncmp("523456", "123456", 0));
// }
