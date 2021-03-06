/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_matrix.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:12:08 by cyalniz           #+#    #+#             */
/*   Updated: 2022/04/25 10:12:10 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	ft_matrix_create(t_game *game, char *file)
{
	int		i;
	int		j;
	int		fd;
	char	*area;

	fd = open(file, O_RDONLY);
	game->matris = (char **)malloc(sizeof(char *) * 8888);
	i = 0;
	j = 0;
	while (i < game->map_sizey)
	{
		j = 0;
		area = get_next_line(fd);
		game->matris[i] = (char *)malloc(sizeof(char *) * 8888);
		if (area == NULL)
			break ;
		while (j < game->map_sizex)
		{
			game->matris[i][j] = (char)area[j];
			j++;
		}
		game->matris[i][j] = '\0';
		i++;
	}
	close (fd);
}
