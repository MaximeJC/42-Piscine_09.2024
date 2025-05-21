#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ft_abs(Value)

int	ft_abs(int Value)
{
	if (Value >= 0)
		return (Value);
	else
		return (-Value);
}

#endif
