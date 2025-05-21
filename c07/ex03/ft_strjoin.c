#include <stdio.h>
#include <unistd.h>
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

void	ft_strcpy(char *dest, char *src, int *j, int dest_len)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[*j] = src[i];
		i++;
		*j += 1;
	}
	if (*j == dest_len)
		dest[*j] = '\0';
}

int	ft_dest_len(int size, char **strs)
{
	int	i;
	int	dest_len;

	i = -1;
	dest_len = 1;
	while (i++ < size - 1)
		dest_len += ft_strlen(strs[i]);
	return (dest_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		dest_len;
	int		i;
	int		j;

	if (size == 0)
	{
		dest = malloc(1);
		return (dest = "");
	}
	i = -1;
	dest_len = ft_dest_len(size, strs);
	dest = malloc(dest_len + (ft_strlen(sep) * (size - 1)) + 1);
	j = 0;
	while (i++ < size - 1)
	{
		ft_strcpy(dest, strs[i], &j, dest_len);
		if (i + 1 != size)
			ft_strcpy(dest, sep, &j, dest_len);
	}
	return (dest);
}

/* int	main(int argc, char **argv)
{
	char *str = NULL;

	str = ft_strjoin(argc, argv, " <-=-> ");
	printf("%s", str);
	free(str);
	return (0);
} */
