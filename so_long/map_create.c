#include "solong.h"

int	ft_get_map_size_x()
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
			break;
		syc++;
	}
	close(fd);
	return syc;
}

int	ft_get_map_size_y()
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
		if (l == '\0')
			break;
	}
	close(fd);
	return syc;
}

int	ft_get_map_coord(int fd)
{
	char	l;
	int		byt;

	byt = 1;

	if (fd < 0)
		return '\0';
	byt = read (fd, &l, 1);
	if (byt == 1)
		return l;
	else
		return '\0';
}

void	ft_put_map(t_game game, int fd, int i, int j, int x, int y)
{
	t_image	image;
	char	c;

	image.vars = game.vars;
	while (j > 0)
	{
		x = 0;
		i = ft_get_map_size_x();
		while (i > 0)
		{
			c = ft_get_map_coord(fd);
			if (c != '\n' && c != '\0')
			{
				ft_put_image(x, y, image, c);
				x += 48;
			}
			i--;
			if(c == '\n')
				i++;
		}
		j--;
		y += 48;
	}
	close(fd);
}

void	ft_map_create(t_game game)
{
	int		i;
	int		j;
	int		fd;
	int		x;
	int		y;

	x = 0;
	y = 0;
	fd = open("map", O_RDONLY);
	i = ft_get_map_size_x();
	j = ft_get_map_size_y();
	ft_put_map(game, fd, i, j, x, y);
	close(fd);
}