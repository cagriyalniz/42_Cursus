#include "header.h"

int isStackNumber(char **n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (n[i] != 0)
	{
		j = 0;
		while (n[i][j] != '\0')
		{
			if ((ft_isdigit(ft_atoi(&n[i][j])) == 0) &&
				(n[i][j] != ' ' || n[i][j] != '-'))
					return (-1);
			j++;
		}
		i++;
	}
	return (0);
}