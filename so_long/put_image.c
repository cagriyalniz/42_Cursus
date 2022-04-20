#include "solong.h"

t_zone	ft_put_zone(char type)
{
	t_zone map[7];
	int		i;

	i = 0;
	map[0] = (t_zone){'1', "./image/earth.xpm"};
	map[1] = (t_zone){'E', "./image/hat.xpm"};
	map[2] = (t_zone){'0', "./image/grass.xpm"};
	map[3] = (t_zone){'C', "./image/wrap.xpm"};
	map[4] = (t_zone){'P', "./image/cat.xpm"};
	map[5] = (t_zone){' ', "./image/error.xpm"};
	map[6] = (t_zone){'B', "./image/black.xpm"};
	while (i < 7)
	{
		if (map[i].name == type)
		{
			return (map[i]);
			//break;
		}
		i++;
	}
	return (map[5]);
}

void	ft_put_image(int x, int y, t_image image, char type)
{
	image.x = x;
	image.y = y;
	image.path = ft_put_zone(type).path;
	image.img = mlx_xpm_file_to_image(image.vars.mlx, image.path, &image.width, &image.height);
	mlx_put_image_to_window(image.vars.mlx, image.vars.win, image.img, image.x, image.y);
	//game->matris[x/48][y/48] = type;
	

}


void	ft_image_change(t_game *game, t_image image, int x, int y)
{
	//up
	ft_put_image(game->hero.x + x, game->hero.y + y, image, 'B');
	ft_put_image(game->hero.x + x, game->hero.y + y, image, '0');
	ft_put_image(game->hero.x, game->hero.y, image, 'B');
	ft_put_image(game->hero.x, game->hero.y, image, 'P');
	
/* 	//down
	ft_put_image(game->hero.x, game->hero.y - 48, image, 'B');
	ft_put_image(game->hero.x, game->hero.y - 48, image, '0');
	ft_put_image(game->hero.x, game->hero.y, image, 'B');
	ft_put_image(game->hero.x, game->hero.y, image, 'P');

	//right
	ft_put_image(game->hero.x - 48, game->hero.y, image, 'B');
	ft_put_image(game->hero.x - 48, game->hero.y, image, '0');
	ft_put_image(game->hero.x, game->hero.y, image, 'B');
	ft_put_image(game->hero.x, game->hero.y, image, 'P');

	//left
	ft_put_image(game->hero.x + 48, game->hero.y, image, 'B');
	ft_put_image(game->hero.x + 48, game->hero.y, image, '0');
	ft_put_image(game->hero.x, game->hero.y, image, 'B');
	ft_put_image(game->hero.x, game->hero.y, image, 'P'); */
}

void	ft_collect_coin(t_game *game, int y, int x)
{
	if (game->matris[game->ny + y][ game->nx + x] == 'C')
	{
		game->coin_count--;
		game->matris[game->ny + y][ game->nx + x] = '0';
	}

}