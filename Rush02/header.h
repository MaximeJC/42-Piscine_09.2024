#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct t_dict_entry
{
	char	*key;
	char	*value;
}	t_dict_entry;

int		detectnum(char *str);
int		ft_strcmp(char *s1, char *s2);
int		convert_len(int len);
int		ft_strlen(char *str);
int		ft_puterror(char *str);
void	ft_norme_value(char *str, char *value, int i);
void	ft_no_more_space(char *str, char *key, char *value);
void	ft_printhundchar(char ch[0], t_dict_entry *dict_entries);
void	ft_printdecchar(char ch[0], t_dict_entry *dict_entries);
void	ft_printdecteen(char *chain, t_dict_entry *dict_entries);
void	ft_printdigitchar(char chain[0], t_dict_entry *dict_entries);
void	ft_putstr(char *str);
void	cut(char *ch, t_dict_entry *dict_entries);
void	ft_printrange(int range, t_dict_entry *dict_entries);
char	*ft_zero(char *str);
char	*ft_strcat(char *dest, char *src);
char	*copy_zero(char *str);
int		dectzero(char *str);
int		onlyzero(char *str);
void	ft_dict_convert(int fd, t_dict_entry *dict_entries, int i);
int		ft_get_file_len(int fd);
void	ft_rev_str(char *str, int size);
void	ft_biginttostr(char *nb_str, int *i, int nb);
int		ft_dict_verif(char *dict_name, t_dict_entry	**dict_entries);

#endif
