#include "header.h"

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strcat2(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;
	char			*path;

	i = 0;
	j = 1;
	path = malloc(63);
	while (dest[i] != '\0')
	{
		path[i] = dest [i];
		i++;
	}
	while (src[j] != '\0')
	{
		path[i] = src[j];
		i++;
		j++;
	}
	path[i] = '\0';
	return (path);
}

int	dectzero(char *str)
{
	int	c;

	c = 0;
	if (str[0] == '-' && ft_strlen(str) > 1)
	{
		c = 1;
		while (str[c] != '\0' )
		{
			if (str[c] != '0')
				return (0);
			c++;
		}
	}
	if (str[0] == '-' && ft_strlen(str) == 1)
		return (0);
	if (str[0] != '-')
		return (0);
	return (1);
}

int	onlyzero(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0' )
	{
		if (str[c] != '0')
			return (0);
		c++;
	}
	return (1);
}

char	*copy_zero(char *str)
{
	char	*z;
	char	*dest;

	z = "0";
	dest = ft_strcat2(z, str);
	return (dest);
}
