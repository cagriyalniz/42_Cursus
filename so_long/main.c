/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:10:52 by cyalniz           #+#    #+#             */
/*   Updated: 2022/04/26 14:50:38 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

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

void	destroy_win(t_game *game)
{
	mlx_destroy_window(game->vars.mlx, game->vars.win);
	printf(CYAN"@@@@@@@@ ---- SO LONG GAME OVER ---- @@@@@@@@ ");
	exit(0);
	free(game);
}

int	main(int ac, char *file[])
{
	t_game	game;

	ac = 2;
	if (ft_strnstr(file[1], ".ber", ft_strlen(file[1])) == NULL)
		return (0);
	game.map_sizex = ft_get_map_size_x(file[1]);
	game.map_sizey = ft_get_map_size_y(file[1]);
	ft_matrix_create(&game, file[1]);
	if (ft_map_control(&game) == 1)
	{
		game.vars.mlx = mlx_init();
		game.vars.win = mlx_new_window(game.vars.mlx, game.map_sizex * 48,
				game.map_sizey * 46, "SO LONG");
		game.coin_count = ft_find_coin(file[1]);
		game.hero.x = ft_get_hero_cord_x(file[1]) * IMG_SIZE_X;
		game.hero.y = ft_get_hero_cord_y(file[1]) * IMG_SIZE_Y;
		game.nx = ft_get_hero_cord_x(file[1]);
		game.ny = ft_get_hero_cord_y(file[1]);
		ft_map_create(game, file[1]);
		mlx_hook(game.vars.win, ON_DESTROY, 0, ft_key_esc, &game);
		mlx_key_hook(game.vars.win, ft_key_hook, &game);
		game.move_count = 0;
		mlx_loop(game.vars.mlx);
	}
	printf("Error\n%s", game.error);
}
