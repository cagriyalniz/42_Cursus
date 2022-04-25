/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyalniz <cyalniz@student.42kocaeli.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:09:32 by cyalniz           #+#    #+#             */
/*   Updated: 2022/04/25 10:09:37 by cyalniz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

int	ft_get_hero_cord_x(char *file)
{
	int		byt;
	char	l;
	int		syc;
	int		fd;

	syc = 0;
	byt = 1;
	fd = open(file, O_RDONLY);
	while (byt != 0)
	{
		byt = read(fd, &l, 1);
		if (l == 'P')
			break ;
		syc++;
		if (l == '\n')
			syc = 0;
	}
	close (fd);
	return (syc);
}

int	ft_get_hero_cord_y(char *file)
{
	int		byt;
	char	l;
	int		syc;
	int		fd;

	syc = 0;
	byt = 1;
	fd = open(file, O_RDONLY);
	while (byt != 0)
	{
		byt = read(fd, &l, 1);
		if (l == '\n')
			syc++;
		if (l == 'P')
			break ;
	}
	close (fd);
	return (syc);
}

int	ft_find_coin(char *file)
{
	int		fd;
	int		count;
	int		buff;
	char	x;

	fd = open(file, O_RDONLY);
	count = 0;
	buff = 1;
	x = 'x';
	while (buff == 1 && x != '\0')
	{
		buff = read(fd, &x, 1);
		if (x == 'C')
			count++;
	}
	close (fd);
	return (count);
}
