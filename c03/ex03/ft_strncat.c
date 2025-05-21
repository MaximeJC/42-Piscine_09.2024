#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = 0;
	while (i < nb && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest1[255] = "Ceci est un ";
// 	char	dest2[255] = "Et ceci est un ";

// 	printf("%s\n", strncat(dest1, "test avec la fonction de base", 15));
// 	printf("%s\n", ft_strncat(dest2, "test avec la fonction reprogrammee", 15));
// }
