#include "solong.h"

void	ft_key_up(t_game *game)
{
	t_image image;

	image.vars = game->vars;
	game->move_count += 1;
	game->hero.y -= 48;
	ft_put_image(game->hero.x, game->hero.y, image, 'P');
	
}

void	ft_key_down(t_game *game)
{
	t_image image;

	image.vars = game->vars;
	game->move_count += 1;
	game->hero.y += 48;
	ft_put_image(game->hero.x, game->hero.y, image, 'P');
}

void	ft_key_right(t_game *game)
{
	t_image image;

	image.vars = game->vars;
	game->move_count += 1;
	game->hero.x += 48;
	ft_put_image(game->hero.x, game->hero.y, image, 'P');
}

void	ft_key_left(t_game *game)
{
	t_image image;

	image.vars = game->vars;
	game->move_count += 1;
	game->hero.x -= 48;
	ft_put_image(game->hero.x, game->hero.y, image, 'P');
}



int	ft_key_esc(t_game *game)
{

	
		printf("move: %d \n", game->move_count);
		printf("key: %d \n", game->key);
		printf("x cor: %d \n", game->hero.x);
		printf("y cor: %d \n", game->hero.y);
		mlx_destroy_window(game->vars.mlx, game->vars.win);
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