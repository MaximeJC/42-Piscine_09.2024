#include "header.h"

int	convert_len(int len)
{
	while (len % 3 != 0)
		len++;
	return (len);
}

char	*ft_zero(char *str)
{
	int		c;
	int		j;
	int		len;
	int		zero;
	char	*dest;

	c = 0;
	len = ft_strlen(str);
	zero = len;
	j = convert_len(len) - zero;
	dest = (char *) malloc(sizeof(char) * convert_len(len) + 1);
	while (c < j)
	{
		dest[c] = '0';
		c++;
	}
	c = 0;
	while (str[c] != '\0')
	{
		dest[c + j] = str[c];
		c++;
	}
	dest[c + j] = '\0';
	return (dest);
}
