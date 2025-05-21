#include "header.h"

void	cut(char *ch, t_dict_entry *dict_entries)
{
	int	i;
	int	range;

	i = 0;
	range = ft_strlen(ch);
	while (i < ft_strlen(ch))
	{
		if (ch[i + 0] != '0')
			ft_printhundchar(&ch[i + 0], dict_entries);
		if (ch[i + 1] != '0' && ch[i + 1] != '1')
			ft_printdecchar(&ch[i + 1], dict_entries);
		if (ch[i + 1] == '1')
			ft_printdecteen(&ch[i + 2], dict_entries);
		if (ch[i + 2] != '0' && ch[i + 1] != '1')
			ft_printdigitchar(&ch[i + 2], dict_entries);
		if (onlyzero(ch) == 1 && i + 3 == ft_strlen(ch))
			ft_putstr(dict_entries[0].value);
		if (range >= 4 && onlyzero(ch) == 0
			&& (ch[2 + i] != '0' || ch[1 + i] != '0' || ch[0 + i] != '0'))
			ft_printrange(range, dict_entries);
		i += 3;
		range -= 3;
	}
	write(1, "\n", 1);
	free(ch);
}
