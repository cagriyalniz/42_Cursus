#include "solong.h"

void ft_matrix_create(t_game *game, char *file)
{
	int 	i;
	int		j;
	int		fd;
	char 	*area;

	fd = open(file, O_RDONLY);
	game->matris = (char **)malloc(sizeof(char *) * 9999);
	i = 0;
	j = 0;
	while (i < game->map_sizey)
	{
		j = 0;
		area = get_next_line(fd);
		game->matris[i] = (char *)malloc(sizeof(char) * 9999);
		if (area == NULL)
			break;
		while (j < game->map_sizex)
		{
			game->matris[i][j] = (char)area[j];
			j++;
		}
		game->matris[i][j] = '\0';
		i++;
	}
	close(fd);
}

int	ft_get_mp_size_x(t_game *game)
{

	int	j;
	int	syc;
	
	j = 0;
	syc = 0;
	while(game->matris[j][0] != '\0')
	{
		j++;
		syc++;
	}
	return syc;
}