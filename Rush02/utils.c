#include "header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	detectnum(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		if (!(str[c] >= '0' && str[c] <= '9'))
			return (0);
		c++;
	}
	return (1);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;
	char			*path;

	i = 0;
	j = 0;
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

int	ft_puterror(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
	return (0);
}
