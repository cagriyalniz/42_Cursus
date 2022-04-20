#include "solong.h"

int	ft_get_hero_cord_x()
{
	int		byt;
	char	l;
	int		syc;
	int		fd;
	syc = 0;
	byt = 1;
	fd = open("map", O_RDONLY);
	while (byt != 0)
	{
		byt = read(fd, &l, 1);
		if(l == 'P')
			break;
		syc++;
		if (l == '\n')
			syc = 0;
	}
	close(fd);
	return syc;
}

int	ft_get_hero_cord_y()
{
	int		byt;
	char	l;
	int		syc;
	int		fd;

	syc = 0;
	byt = 1;
	fd = open("map", O_RDONLY);
	while (byt != 0)
	{
		byt = read(fd, &l, 1);
		if(l == '\n')
			syc++;
		if (l == 'P')
			break;
	}
	close(fd);
	return syc;
}

int	ft_find_coin(void)
{
	int fd = open("map",O_RDONLY);
	int count = 0;
	int buff = 1;
	char	x = 'x';
	while (buff == 1 && x != '\0')
	{
		buff = read(fd, &x, 1);
		if (x == 'C')
			count++;
	}
	
	return (count);
	close (fd);
}