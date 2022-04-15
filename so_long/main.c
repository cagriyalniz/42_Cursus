#include "solong.h"


int main(void)
{
	t_game	game;
	
	//game = malloc(sizeof(t_game));
	game.vars.mlx = mlx_init();
	game.vars.win = mlx_new_window(game.vars.mlx, 1920, 1080, "!!SOLONG!!");
	game.move_count = 0;
	game.game_over = 1;
	

	//ft_map_create(game);
	mlx_hook(game.vars.win, 2, 1L<<0, ft_key_esc, &game);
	mlx_key_hook(game.vars.win, ft_key_hook, &game);

	
	mlx_loop(game.vars.mlx);



}