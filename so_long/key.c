#include "solong.h"

void	ft_key_up(t_game *game)
{

	game->move_count += 1;
}

void	ft_key_down(t_game *game)
{

	game->move_count += 1;
}


int	ft_key_esc(int keycode, t_game *game)
{
	if (keycode == 53)
	{
		printf("move: %d", game->move_count);
		mlx_destroy_window(game->vars.mlx, game->vars.win);
		exit(0);
	}
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
	return (0);
}