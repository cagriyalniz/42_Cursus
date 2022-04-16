#include "solong.h"

t_zone	ft_put_zone(char type)
{
	t_zone map[7];
	int		i;

	i = 0;
	map[0] = (t_zone){'1', "./image/earth.xpm"};
	map[1] = (t_zone){'C', "./image/hat.xpm"};
	map[2] = (t_zone){'0', "./image/snow.xpm"};
	map[3] = (t_zone){'E', "./image/fire.xpm"};
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

}

