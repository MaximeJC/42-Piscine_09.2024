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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size > dest_len)
	{
		while (src[i] != '\0' && i < (size - dest_len - 1))
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest_len + src_len);
	}
	else
		return (size + src_len);
}

/* int	main(void)
{
	char	dest1[255] = "Ceci est un test avec la ";
	char	dest2[255] = "Ceci est un test avec la ";

	printf("%zu\n", strlcat(dest1, "fonction de base", 24));
	printf("%d\n", ft_strlcat(dest2, "fonction reprogr", 24));
} */
// dest_len = 25	|	  Compile with -lbsd
