#ifndef	SOLONG_H
#define SOLONG_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "minilibx/mlx.h"

#ifndef	IMG_SIZE
#define IMG_SIZE 48
#endif
typedef	struct s_vars{
	void	*mlx;
	void	*win;
}	t_vars;

typedef	struct s_image
{
	struct s_vars	vars;
	int				x;
	int				y;
	char			*path;
	int				width;
	int				height;
	void			*img;
}	t_image;

typedef	struct s_zone
{
	char	name;
	char	*path;
}	t_zone;

typedef	struct game
{
	t_vars	vars;
	t_image	image;
	t_zone	zone;
	int		game_over;
	int		move_count;
	
}	t_game;

//key
int		ft_key_hook(int keycode, t_game *game);
void		ft_key_up(t_game *game);
int	ft_key_esc(int	keycode, t_game *game);
void	ft_key_down(t_game *game);

//map
void	ft_map_create(t_game game);
#endif