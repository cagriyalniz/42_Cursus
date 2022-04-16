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

void	ft_move_hero(t_game game)
{
	t_image image;
	
	
	image.vars = game.vars;

	ft_put_image(game.hero.x, game.hero.y, image, 'P');

}