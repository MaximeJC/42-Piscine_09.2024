#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/* int	main(void)
{
	char dest[50];

	// printf("Strlcpy: %zu\n", strlcpy(dest, "C-C-C-Comboo !!", 8));
	printf("Ft_strlcpy: %d\n", ft_strlcpy(dest, "C-C-C-Comboo !!", 8));
	printf("%s", dest);
} */

//! Compile with -lbsd
