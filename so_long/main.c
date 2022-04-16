#include "solong.h"


int main(void)
{
	t_game	game;


	
	//game = malloc(sizeof(t_game));
	game.vars.mlx = mlx_init();
	game.vars.win = mlx_new_window(game.vars.mlx, 480, 300, "!!SOLONG!!");
	mlx_key_hook(game.vars.win, ft_key_hook, &game);
	game.move_count = 0;
	game.game_over = 1;
	game.hero.type = 'P';
	game.wall = '1';
	game.hero.x = ft_get_hero_cord_x()*48;
	game.hero.y = ft_get_hero_cord_y()*48;

	ft_map_create(game);
	
	//ft_move_hero(game);

	mlx_loop(game.vars.mlx);



}