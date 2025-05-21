#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest1[255] = "Ceci est un";
// 	char	dest2[255] = "Et ceci est un";

// 	printf("%s\n", strcat(dest1, " test avec la fonction de base"));
// 	printf("%s\n", ft_strcat(dest2, " test avec la fonction reprogrammee"));
// }
