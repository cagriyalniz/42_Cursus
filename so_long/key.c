#include "solong.h"

void	ft_key_up(t_game *game)
{
	

	if(game->matris[game->nx][game->ny - 1] != '1')
	{
			t_image image;

	image.vars = game->vars;
	game->move_count += 1;
	game->hero.y -= 48;
	game->ny--;
	ft_put_image(game->hero.x, game->hero.y + 48, image, 'B');
	ft_put_image(game->hero.x, game->hero.y + 48, image, '0');
	ft_put_image(game->hero.x, game->hero.y, image, 'B');
	ft_put_image(game->hero.x, game->hero.y, image, 'P');
	}
}

void	ft_key_down(t_game *game)
{

	if(game->matris[game->nx][game->ny + 1] != '1')
	{
			t_image image;

	image.vars = game->vars;
	game->move_count += 1;
	game->hero.y += 48;
	game->ny++;
	ft_put_image(game->hero.x, game->hero.y - 48, image, 'B');
	ft_put_image(game->hero.x, game->hero.y - 48, image, '0');
	ft_put_image(game->hero.x, game->hero.y, image, 'B');
	ft_put_image(game->hero.x, game->hero.y, image, 'P');
	}

}

void	ft_key_right(t_game *game)
{

	if(game->matris[game->nx][game->ny] != '1')
	{
			t_image image;

	image.vars = game->vars;
	game->move_count += 1;
	game->hero.x += 48; 
	game->nx += 1;
	ft_put_image(game->hero.x - 48, game->hero.y, image, 'B');
	ft_put_image(game->hero.x - 48, game->hero.y, image, '0');
	ft_put_image(game->hero.x, game->hero.y, image, 'B');
	ft_put_image(game->hero.x, game->hero.y, image, 'P');
	}
	else{
		game->kontrol = 100;
			}
	
	
}

void	ft_key_left(t_game *game)
{

	if(game->matris[game->nx - 1][game->ny] != '1')
	{
			t_image image;

	image.vars = game->vars;
	game->move_count += 1;
	game->hero.x -= 48;
	game->nx--;
	ft_put_image(game->hero.x + 48, game->hero.y, image, 'B');
	ft_put_image(game->hero.x + 48, game->hero.y, image, '0');
	ft_put_image(game->hero.x, game->hero.y, image, 'B');
	ft_put_image(game->hero.x, game->hero.y, image, 'P');
	}	
}



int	ft_key_esc(t_game *game)
{
		t_image image;
		image.vars = game->vars;
	
		printf("move: %d \n", game->move_count);
		printf("key: %d \n", game->key);
		printf("x cor: %d \n", game->hero.x);
		printf("y cor: %d \n", game->hero.y);
		printf("game.map.zone.name: %c\n", game->map.zone.name);
	//	printf("next type: %c", ft_find_next_type(game->hero.x, game->hero.y, image))
	printf("kontrol: %d\n", game->kontrol);
		mlx_destroy_window(game->vars.mlx, game->vars.win);
		int i =0, j = 0;
		while(i <= 10)
		{
			j = 0;
			while(j <= 9)
			{
			printf(" %c", game->matris[i][j]);
			j++;
			}
			printf("\n");
			i++;
		}
		
	free(game->matris);
	printf("nx: %d ny: %d", game->nx, game->ny);
		exit(0);
	
	return (0);
}

int	ft_key_hook(int keycode, t_game *game)
{

	if (keycode == 13)
		ft_key_up(game);
	else if (keycode == 0)
		ft_key_left(game);
	else if (keycode == 1)
		ft_key_down(game);
	else if (keycode == 2)
		ft_key_right(game);
	else if (keycode == 53)
		ft_key_esc(game);
	return (0);
}