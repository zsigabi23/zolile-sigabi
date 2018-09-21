#include "libft.h"

int		ft_countlines(char *str)
{
	int	lines;

	lines = 0;
	if (!str)
		return (-1);
	while (*str)
	{
		if (*str == '\n')
			lines++;
		str++;
	}
	return (lines);
}
