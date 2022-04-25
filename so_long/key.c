/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:10:26 by cyalniz           #+#    #+#             */
/*   Updated: 2022/04/25 10:10:32 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	ft_key_up(t_game *game)
{
	t_image	image;

	ft_collect_coin(game, -1, 0);
	if (game->matris[game->ny - 1][game->nx] != '1')
	{
		if (game->matris[game->ny - 1][game->nx]
		== 'E' && game->coin_count == 0)
			destroy_win(game);
		else
		{
			if (game->coin_count >= 0 && game->matris[game->ny - 1][game->nx]
			!= 'E' && game->ny--)
			{
				image.vars = game->vars;
				game->move_count += 1;
				game->hero.y -= IMG_SIZE_Y;
				ft_image_change(game, image, 0, IMG_SIZE_Y);
				printf(YELLOW"moved to the up count = %d \n",
					game->move_count);
			}
		}
	}
}

void	ft_key_down(t_game *game)
{
	t_image	image;

	ft_collect_coin(game, 1, 0);
	if (game->matris[game->ny + 1][game->nx] != '1')
	{
		if (game->matris[game->ny + 1][game->nx] == 'E' && game->coin_count
		== 0)
			destroy_win(game);
		else
		{
			if (game->coin_count >= 0 && game->matris[game->ny + 1][game->nx]
			!= 'E' && game->ny++)
			{
				image.vars = game->vars;
				game->move_count += 1;
				game->hero.y += IMG_SIZE_Y;
				ft_image_change(game, image, 0, -IMG_SIZE_Y);
				printf(GREEN"moved to the down count = %d \n", game->move_count);
			}
		}
	}
}

void	ft_key_right(t_game *game)
{
	t_image	image;

	ft_collect_coin(game, 0, 1);
	if (game->matris[game->ny][game->nx + 1] != '1')
	{
		if (game->matris[game->ny][game->nx + 1] == 'E' && game->coin_count
		== 0)
			destroy_win(game);
		else
		{
			if (game->coin_count >= 0 && game->matris[game->ny][game->nx + 1]
			!= 'E' && game->nx++)
			{
				image.vars = game->vars;
				game->move_count += 1;
				game->hero.x += IMG_SIZE_X;
				ft_image_change(game, image, -IMG_SIZE_X, 0);
				printf(BLUE"moved to the right count = %d \n", game->move_count);
			}
		}
	}
}

void	ft_key_left(t_game *game)
{
	t_image	image;

	ft_collect_coin(game, 0, -1);
	if (game->matris[game->ny][game->nx - 1] != '1')
	{
		if (game->matris[game->ny][game->nx - 1] == 'E' && game->coin_count
		== 0)
			destroy_win(game);
		else
		{
			if (game->coin_count >= 0 && game->matris[game->ny][game->nx - 1]
			!= 'E' && game->nx--)
			{
				image.vars = game->vars;
				game->move_count += 1;
				game->hero.x -= IMG_SIZE_X;
				ft_image_change(game, image, IMG_SIZE_X, 0);
				printf(RED"moved to the left count = %d \n", game->move_count);
			}
		}
	}	
}

int	ft_key_esc(t_game *game)
{
	mlx_destroy_image(game->vars.mlx, game->vars.win);
	free(game->matris);
	exit(0);
	return (0);
}
