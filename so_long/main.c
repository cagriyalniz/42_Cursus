#include "solong.h"


int main(void)
{
	t_game	game;


	//game = (t_game *)malloc(sizeof(t_game));
	//game = malloc(sizeof(t_game));
	game.vars.mlx = mlx_init();
	game.vars.win = mlx_new_window(game.vars.mlx, 7200, 3600, "!!CAGRİ!!");
	mlx_key_hook(game.vars.win, ft_key_hook, &game);
	game.move_count = 0;
	game.game_over = 1;
	game.hero.type = 'P';
	//game.matris[ft_get_map_size_x() - 1][ft_get_map_size_y() - 1];
	// = (char**)malloc(sizeof(char*)*9999);
	
	ft_matrix_create(&game);
	//ft_matrix(&game);
	game.hero.x = ft_get_hero_cord_x()*48;
	game.hero.y = ft_get_hero_cord_y()*48;
	game.nx = game.hero.x/48;
	game.ny = game.hero.y/48;


	ft_map_create(game);
	


	mlx_loop(game.vars.mlx);



}