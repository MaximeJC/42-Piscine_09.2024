#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*dest;
	int		i;

	src_len = ft_strlen(src);
	i = 0;
	dest = malloc(src_len + 1);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(int argc, char **argv)
{
	argc = 0;
	printf("%s", ft_strdup(argv[1]));
} */
