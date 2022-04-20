#include "solong.h"

int main(void)
{
	t_game	game;

	game.vars.mlx = mlx_init();
	game.vars.win = mlx_new_window(game.vars.mlx, 1920, 1080, "!!SO_LONG!!");
	mlx_key_hook(game.vars.win, ft_key_hook, &game);
	mlx_hook(game.vars.win, ON_DESTROY, 0, ft_key_esc, &game);
	game.move_count = 0;
	game.game_over = 1;
	game.hero.type = 'P';
	game.map_sizex = ft_get_map_size_x();
	game.map_sizey = ft_get_map_size_y();
	game.coin_count = ft_find_coin();
	game.hero.x = ft_get_hero_cord_x()*48;
	game.hero.y = ft_get_hero_cord_y()*48;
	game.nx = ft_get_hero_cord_x();
	game.ny = ft_get_hero_cord_y();
	ft_matrix_create(&game);
	ft_map_create(game);
	mlx_loop(game.vars.mlx);
}