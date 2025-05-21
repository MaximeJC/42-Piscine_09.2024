#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	c[25];
// 	char	d[25];
// 	char	*dest;

// 	dest = c;
// 	printf("Strcpy: %s\nFt_strcpy: ", strcpy(dest, "Never gonna give you up!"));
// 	dest = d;
// 	dest = ft_strcpy(dest, "Never gonna give you up!");
// 	printf("%s", dest);
// }
