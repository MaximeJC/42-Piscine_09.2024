#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	c[25];
// 	char	d[25];
// 	char	*dest;

// 	dest = c;
// 	printf("Strcpy: %s\nFt_strcpy: ", strncpy(dest, "Youpiii !!!", 5));
// 	dest = d;
// 	dest = ft_strncpy(dest, "Youpiii !!!", 5);
// 	printf("%s", dest);
// }
