#include "solong.h"

void	ft_matrix(t_game *game)
{
	int	x;
	int	y;
	int fd;
	char c;
	int byte = 1;

	fd = open("map",O_RDONLY);

	x = 0;
	y = 0;

	while (byte == 1)
	{
		x = 0;
		while (x < ft_get_map_size_x())
		{
			byte = read(fd, &c, 1);
		if (byte != 1)
			break ;
		if (c != '\n')
		{
			game->matris[x][y] = c;
		}
		y++;
		}
	}


	close (fd);
}

void ft_matrix_create(t_game *game)
{
	int 	i;
	int		j;
	int		fd;
	char 	*area;

	fd = open("map", O_RDONLY);
	game->matris = (char **)malloc(sizeof(char *) * 9999);
	i = 0;
	j = 0;
	while (i < ft_get_map_size_y())
	{
		j = 0;
		area = get_next_line(fd);
		game->matris[i] = (char *)malloc(sizeof(char) * 9999);
		if (area == NULL)
			break;
		while (j < ft_get_map_size_x())
		{
			game->matris[i][j] = (char)area[j];
			j++;
		}
		game->matris[i][j] = '\0';
		i++;
	}
	close(fd);
}