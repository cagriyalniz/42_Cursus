#include "solong.h"


t_zone put_zone(char type)
{

	t_zone map[6];
	int	i;
	
	i = 0;
	map[0] = (t_zone){'1', "./image/earth.xpm"};
	map[1] = (t_zone){'C', "./image/cat.xpm"};
	map[2] = (t_zone){'0', "./image/snow.xpm"};
	map[3] = (t_zone){'E', "./image/fire.xpm"};
	map[4] = (t_zone){'P', "./image/hat.xpm"};
	map[5] = (t_zone){' ', "./image/error.xpm"};
	//write(1, &type, 1);
	while (i < 5)
	{	
		if (map[i].name == type)
		{
			//write(1, &type, 1);
			return (map[i]);
			break;
		}
		i++;
	}
//	write(1, "w", 1);

	return (map[5]);
}

void	*put_image(int x, int y, t_image *image, char type)
{

	//write(1, &type, 1);
	
	image->x = x;
	image->y = y;
	image->path = put_zone(type).path;
	image->image = mlx_xpm_file_to_image(image->vars.mlx, image->path, &image->width, &image->height);
	mlx_put_image_to_window(image->vars.mlx, image->vars.win, image->image, image->x, image->y);


	return (image->image);
	
}

int *ft_hero_coord()
{
	int byt;
	char l;
	int y;
	int x;
	int knm[1][2];
	y = 0;
	x = 0;
	byt = 1;
	int fd = open("map", O_RDONLY);
	while(byt != 0)
	{
		byt = read(fd, &l, 1);
		write(1, &byt, 1);
		if(l == '\0')
			break;
		if(l == '\n')
			{	
				x = 0;
				y++;
			}
		else if(l != '\n')
			x++;

	}
	close(fd);
	knm[0][0] = x;
	knm[0][1] = y;
	return knm;
}
void ft_move_hero(t_vars vars)
{
	mlx_key_hook(vars.win, key_hook, &vars);
	put_image()

}