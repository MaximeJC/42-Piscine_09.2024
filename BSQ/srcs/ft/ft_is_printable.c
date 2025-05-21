int	ft_is_printable(char c)
{
	int	i;

	i = 0;
	if (c < 32 || c > 126)
	{
		return (1);
	}
	return (0);
}
