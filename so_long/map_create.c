/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:11:50 by cyalniz           #+#    #+#             */
/*   Updated: 2022/04/25 10:11:51 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	ft_get_map_size_x(char *file)
{
	int		byt;
	int		syc;
	int		fd;
	char	l;

	syc = 0;
	byt = 1;
	fd = open(file, O_RDONLY);
	while (byt != 0)
	{
		byt = read(fd, &l, 1);
		if (l == '\n')
			break ;
		syc++;
	}
	close (fd);
	return (syc);
}

int	ft_get_map_size_y(char *file)
{
	int		byt;
	int		syc;
	int		fd;
	char	l;

	syc = 0;
	byt = 1;
	fd = open(file, O_RDONLY);
	while (byt != 0)
	{
		byt = read(fd, &l, 1);
		if (l == '\n')
			syc++;
		if (l == '\0')
			break ;
	}
	close (fd);
	return (syc);
}

int	ft_get_map_coord(int fd)
{
	int		byt;
	char	l;

	byt = 1;
	if (fd < 0)
		return ('\0');
	byt = read(fd, &l, 1);
	if (byt == 1)
		return (l);
	else
		return ('\0');
}

void	ft_put_map(t_game game, t_put_map pm)
{
	t_image	image;
	char	c;

	image.vars = game.vars;
	while (pm.j > 0)
	{
		pm.x = 0;
		pm.i = game.map_sizex;
		while (pm.i > 0)
		{
			c = ft_get_map_coord(pm.fd);
			if (c != '\n' && c != '\0')
			{
				ft_put_image(pm.x, pm.y, image, c);
				pm.x += IMG_SIZE_X;
			}
			pm.i--;
			if (c == '\n')
				pm.i++;
		}
		pm.j--;
		pm.y += IMG_SIZE_Y;
	}
	close (pm.fd);
}

void	ft_map_create(t_game game, char *file)
{
	t_put_map	pm;

	pm.x = 0;
	pm.y = 0;
	pm.fd = open(file, O_RDONLY);
	pm.i = game.map_sizex;
	pm.j = game.map_sizey;
	ft_put_map(game, pm);
	close (pm.fd);
}
