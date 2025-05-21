#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
		{
			str += i;
			return (str);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	// char	*dest1 = "Trouve moi";
	char	*dest2 = "Trouve moi";
	char	*src = "";

	// printf("%s\n", strstr(dest1, src));
	printf("%s\n", ft_strstr(dest2, src));
} */
