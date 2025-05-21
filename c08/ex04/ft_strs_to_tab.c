#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_show_tab(struct s_stock_str *par);

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

int	ft_strs_to_tab_bis(int *i, t_stock_str	*stock_str)
{
	stock_str[*i].str = malloc(stock_str[*i].size + 1);
	stock_str[*i].copy = malloc(stock_str[*i].size + 1);
	if (stock_str[*i].str == NULL || stock_str[*i].copy == NULL)
	{
		if (stock_str[*i].str != NULL)
			free(stock_str[*i].str);
		while (i-- > 0)
		{
			free(stock_str[*i].str);
			free(stock_str[*i].copy);
		}
		free(stock_str);
		return (1);
	}
	return (0);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_str;

	i = -1;
	stock_str = malloc(sizeof(t_stock_str) * ac + 1);
	if (stock_str == NULL)
		return (NULL);
	while (i++ < ac - 1)
	{
		stock_str[i].size = ft_strlen(av[i]);
		if (ft_strs_to_tab_bis(&i, stock_str))
			return (NULL);
		stock_str[i].str = av[i];
		stock_str[i].copy = ft_strcpy(stock_str[i].copy, stock_str[i].str);
	}
	stock_str[i + 1].size = 0;
	return (stock_str);
}

/* int main(int argc, char *argv[])
{
	ft_strs_to_tab(argc, argv);
	return 0;
} */
