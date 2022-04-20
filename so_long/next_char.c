#include "solong.h"

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