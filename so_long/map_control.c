/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_control.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:11:16 by cyalniz           #+#    #+#             */
/*   Updated: 2022/04/25 11:30:03 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	ft_map_cntrl_elmn_sysi(t_game *game)
{
	game->mp_ct_i = 0;
	game->pcount = 0;
	game->ecount = 0;
	game->ccount = 0;
	while (game->mp_ct_i < game->map_sizey)
	{
		game->mp_ct_j = 0;
		while (game->mp_ct_j < game->map_sizex)
		{
			if (game->matris[game->mp_ct_i][game->mp_ct_j] == 'P')
				game->pcount++;
			else if (game->matris[game->mp_ct_i][game->mp_ct_j] == 'C')
				game->ccount++;
			else if (game->matris[game->mp_ct_i][game->mp_ct_j] == 'E')
				game->ecount++;
			game->mp_ct_j++;
		}
		game->mp_ct_i++;
	}
	if (game->pcount == 1 && game->ccount > 0 && game->ecount > 0)
		return (1);
	else
		return (0);
}

int	ft_map_cntrl_ust_alt(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map_sizex)
	{
		if (game->matris[0][i] != '1')
		{
			game->error = "MAP: (UP)";
			return (0);
		}
		if (game->matris[game->map_sizey - 2][i] != '1')
		{
			game->error = "MAP: (DOWN)";
			return (0);
		}
	i++;
	}
	return (1);
}

int	ft_map_cntrl_sag_sol(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->map_sizey - 1)
	{
		if (game->matris[i][0] != '1')
		{
			game->error = "MAP: (LEFT)";
			return (0);
		}
		else if (game->matris[i][game->map_sizex - 1] != '1')
		{
			game->error = "MAP: (RIGHT)";
			return (0);
		}
	i++;
	}
	return (1);
}

int	ft_map_control(t_game *game)
{
	if (ft_map_cntrl_ust_alt(game) == 0)
		return (0);
	else if (ft_map_cntrl_elmn_sysi(game) == 0)
	{
		game->error = "(WRONG OBJECTS)";
		return (0);
	}
	else if (ft_map_cntrl_sag_sol(game) == 0)
		return (0);
	return (1);
}
